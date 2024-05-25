import os

import xacro
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, ExecuteProcess,
                            IncludeLaunchDescription)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():


    # Name and package path to Xacro file
    pkg_name = 'my_package'

    # Process the URDF file
    pkg_path = os.path.join(get_package_share_directory(pkg_name))
    xacro_file = os.path.join(pkg_path,'description','robot.urdf.bigger.xacro')
    robot_description_config = xacro.process_file(xacro_file)
    
    # Create a robot_state_publisher node
    params = {'robot_description': robot_description_config.toxml(), 'use_sim_time': True}
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        #output='screen',
        parameters=[params]
    )

    # Specify the Gazebo launch file to load the world
    gazebo_world_path = os.path.join(get_package_share_directory(pkg_name), 'worlds', 'city')

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('gazebo_ros'), 'launch'), '/gazebo.launch.py']),
            launch_arguments=[('world', gazebo_world_path)],
        
    )
    
    # Specify the initial pose of the robot
    initial_pose = [-47.2251, -47.8056, 0.187501, 1e-06, 1e-06, 1.60323]         
    spawn_entity = Node(
    package='gazebo_ros',
    executable='spawn_entity.py',
    arguments=[
        '-topic', 'robot_description',
        '-entity', 'my_bot',
        '-x', str(initial_pose[0]),
        '-y', str(initial_pose[1]),
        '-z', str(initial_pose[2]),
        '-R', str(initial_pose[3]),
        '-P', str(initial_pose[4]),
        '-Y', str(initial_pose[5])
    ]
    )

    # rviz config file path
    rviz_config_file = os.path.join(pkg_path, 'config', 'drive_bot.rviz')

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        #output="log",
        arguments=["-d", rviz_config_file],
    )

    pkg_path_yolov8 = os.path.join(get_package_share_directory("yolobot_algo"))

    yolov8 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_path_yolov8, 'launch', 'yolov8.launch.py'),
        )
    )

    # Get the path to the SLAM parameters file
    slam_params_file = os.path.join(
        get_package_share_directory(pkg_name), 'config', 'mapper_params_online_async.yaml')

    slam_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(pkg_name), 'launch'), '/online_async_launch.py']),
        launch_arguments=[('slam_params_file', slam_params_file)]
    )

    nav2_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(pkg_name), 'launch'), '/navigation_launch.py']),
            launch_arguments=[('map_subscribe_transient_local', "True"), ('use_sim_time', 'True')],
    )
    
# Run the node
    return LaunchDescription([
        nav2_node,
        gazebo,
        node_robot_state_publisher,
        spawn_entity,
        rviz_node,
        yolov8,
        slam_node,
        
        

    ])