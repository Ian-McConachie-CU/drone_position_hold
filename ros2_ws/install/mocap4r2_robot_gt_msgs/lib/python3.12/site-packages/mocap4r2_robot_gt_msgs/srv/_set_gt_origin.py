# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mocap4r2_robot_gt_msgs:srv/SetGTOrigin.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetGTOrigin_Request(type):
    """Metaclass of message 'SetGTOrigin_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_robot_gt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_robot_gt_msgs.srv.SetGTOrigin_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_gt_origin__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_gt_origin__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_gt_origin__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_gt_origin__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_gt_origin__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CURRENT_IS_ORIGIN__DEFAULT': False,
        }

    @property
    def CURRENT_IS_ORIGIN__DEFAULT(cls):
        """Return default value for message field 'current_is_origin'."""
        return False


class SetGTOrigin_Request(metaclass=Metaclass_SetGTOrigin_Request):
    """Message class 'SetGTOrigin_Request'."""

    __slots__ = [
        '_current_is_origin',
        '_origin_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'current_is_origin': 'boolean',
        'origin_pose': 'geometry_msgs/Pose',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_is_origin = kwargs.get(
            'current_is_origin', SetGTOrigin_Request.CURRENT_IS_ORIGIN__DEFAULT)
        from geometry_msgs.msg import Pose
        self.origin_pose = kwargs.get('origin_pose', Pose())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_is_origin != other.current_is_origin:
            return False
        if self.origin_pose != other.origin_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_is_origin(self):
        """Message field 'current_is_origin'."""
        return self._current_is_origin

    @current_is_origin.setter
    def current_is_origin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'current_is_origin' field must be of type 'bool'"
        self._current_is_origin = value

    @builtins.property
    def origin_pose(self):
        """Message field 'origin_pose'."""
        return self._origin_pose

    @origin_pose.setter
    def origin_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'origin_pose' field must be a sub message of type 'Pose'"
        self._origin_pose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetGTOrigin_Response(type):
    """Metaclass of message 'SetGTOrigin_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_robot_gt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_robot_gt_msgs.srv.SetGTOrigin_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_gt_origin__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_gt_origin__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_gt_origin__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_gt_origin__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_gt_origin__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetGTOrigin_Response(metaclass=Metaclass_SetGTOrigin_Response):
    """Message class 'SetGTOrigin_Response'."""

    __slots__ = [
        '_success',
        '_error_msg',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_msg': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_msg = kwargs.get('error_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetGTOrigin_Event(type):
    """Metaclass of message 'SetGTOrigin_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_robot_gt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_robot_gt_msgs.srv.SetGTOrigin_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_gt_origin__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_gt_origin__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_gt_origin__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_gt_origin__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_gt_origin__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetGTOrigin_Event(metaclass=Metaclass_SetGTOrigin_Event):
    """Message class 'SetGTOrigin_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mocap4r2_robot_gt_msgs/SetGTOrigin_Request, 1>',
        'response': 'sequence<mocap4r2_robot_gt_msgs/SetGTOrigin_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mocap4r2_robot_gt_msgs', 'srv'], 'SetGTOrigin_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mocap4r2_robot_gt_msgs', 'srv'], 'SetGTOrigin_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mocap4r2_robot_gt_msgs.srv import SetGTOrigin_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetGTOrigin_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetGTOrigin_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mocap4r2_robot_gt_msgs.srv import SetGTOrigin_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetGTOrigin_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetGTOrigin_Response'"
        self._response = value


class Metaclass_SetGTOrigin(type):
    """Metaclass of service 'SetGTOrigin'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_robot_gt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_robot_gt_msgs.srv.SetGTOrigin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_gt_origin

            from mocap4r2_robot_gt_msgs.srv import _set_gt_origin
            if _set_gt_origin.Metaclass_SetGTOrigin_Request._TYPE_SUPPORT is None:
                _set_gt_origin.Metaclass_SetGTOrigin_Request.__import_type_support__()
            if _set_gt_origin.Metaclass_SetGTOrigin_Response._TYPE_SUPPORT is None:
                _set_gt_origin.Metaclass_SetGTOrigin_Response.__import_type_support__()
            if _set_gt_origin.Metaclass_SetGTOrigin_Event._TYPE_SUPPORT is None:
                _set_gt_origin.Metaclass_SetGTOrigin_Event.__import_type_support__()


class SetGTOrigin(metaclass=Metaclass_SetGTOrigin):
    from mocap4r2_robot_gt_msgs.srv._set_gt_origin import SetGTOrigin_Request as Request
    from mocap4r2_robot_gt_msgs.srv._set_gt_origin import SetGTOrigin_Response as Response
    from mocap4r2_robot_gt_msgs.srv._set_gt_origin import SetGTOrigin_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
