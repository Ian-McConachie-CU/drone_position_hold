from setuptools import find_packages, setup

package_name = 'visualizer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools','matplotlib','numpy'],
    zip_safe=True,
    maintainer='strain-drone',
    maintainer_email='ian.mcconachie@colorado.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'run_visualizer = visualizer.run_visualizer:main'
        ],
    },
)
