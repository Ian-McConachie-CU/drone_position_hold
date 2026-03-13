#!/usr/bin/env python3
"""
Drone Commander — keyboard interface for the position_publisher bridge.

Run this in a SEPARATE terminal from position_publisher.

Killing or crashing this node:
  - does NOT affect the bridge process
  - does NOT interrupt mocap → FC data flow
  - does NOT change the flight controller's mode or position

Keys (no Enter needed):
  [z]  Save current position + heading as zero
  [g]  Goto zero (switches FC to Guided, sends position + yaw target)
  [q]  Quit this commander only
"""

import sys
import tty
import termios
import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger


class DroneCommander(Node):

    def __init__(self):
        super().__init__('drone_commander')

        self.save_zero_client = self.create_client(Trigger, 'save_zero_position')
        self.goto_zero_client = self.create_client(Trigger, 'goto_zero_position')

        self.get_logger().info('Waiting for position_publisher services...')

        if not self.save_zero_client.wait_for_service(timeout_sec=10.0):
            raise RuntimeError(
                '/save_zero_position not found — is position_publisher running?'
            )
        if not self.goto_zero_client.wait_for_service(timeout_sec=10.0):
            raise RuntimeError(
                '/goto_zero_position not found — is position_publisher running?'
            )

        self.get_logger().info('Connected to position_publisher services')

    def call_service(self, client, label):
        """
        Send a Trigger request and log the response.
        Spins internally until the future resolves (3 s timeout).
        """
        future = client.call_async(Trigger.Request())
        rclpy.spin_until_future_complete(self, future, timeout_sec=3.0)

        if future.result() is not None:
            r = future.result()
            if r.success:
                self.get_logger().info(f'[{label}] {r.message}')
            else:
                self.get_logger().warn(f'[{label}] FAILED: {r.message}')
        else:
            self.get_logger().error(
                f'[{label}] No response (timeout) — is position_publisher running?'
            )


def run_keyboard_loop(node):
    """
    Raw-terminal keyboard loop on the main thread.
    Restores the terminal before each service call so ROS2 logger
    output is not garbled, then returns to raw mode afterwards.
    Does NOT call rclpy.shutdown() on [q] — only this node exits.
    """
    print('\n' + '=' * 50)
    print('  Drone Commander')
    print('=' * 50)
    print('  [z]  Save current position as zero')
    print('  [g]  Goto zero  (Guided mode + yaw hold)')
    print('  [q]  Quit commander  (bridge keeps running)')
    print('=' * 50 + '\n')

    fd           = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)

    def cooked():
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def raw():
        tty.setraw(fd)

    try:
        raw()
        while True:
            ch = sys.stdin.read(1)

            if ch == 'z':
                cooked()
                node.call_service(node.save_zero_client, 'save_zero')
                raw()

            elif ch == 'g':
                cooked()
                node.call_service(node.goto_zero_client, 'goto_zero')
                raw()

            elif ch in ('q', '\x03'):   # q or Ctrl+C
                cooked()
                print('\nCommander exiting.  Bridge and drone unaffected.\n')
                break

    except Exception as e:
        cooked()
        print(f'\nKeyboard error: {e}')
    finally:
        # Guarantee terminal is always restored, even on unexpected exit
        try:
            cooked()
        except Exception:
            pass


def main(args=None):
    rclpy.init(args=args)
    node = None
    try:
        node = DroneCommander()
        run_keyboard_loop(node)     # blocks until [q] or error
    except RuntimeError as e:
        print(f'\nCould not start commander: {e}')
    except KeyboardInterrupt:
        print('\nCommander interrupted.  Bridge and drone unaffected.')
    finally:
        if node is not None:
            node.destroy_node()
        try:
            rclpy.shutdown()
        except Exception:
            pass


if __name__ == '__main__':
    main()