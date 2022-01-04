import os
import launch
import launch_ros

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import FindExecutable, PathJoinSubstitution
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = launch_ros.substitutions.FindPackageShare(package='hunter_description').find('hunter_description')
    default_rviz_config_path = os.path.join(pkg_share, 'rviz/viz.rviz')
    world_path=os.path.join(pkg_share, 'world/my_world.sdf')
    
    model_name = 'hunter_v1_ntunav_gazebo.xacro'
    robot_description_content = Command([
        PathJoinSubstitution([FindExecutable(name="xacro")]), " ",
        PathJoinSubstitution(
            [FindPackageShare("hunter_description"), "urdf", model_name]
        ),
    ])
    
    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        condition=launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
    )
    
    joint_state_publisher_gui_node = launch_ros.actions.Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        condition=launch.conditions.IfCondition(LaunchConfiguration('gui'))
    )
    
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )
    
    spawn_entity = launch_ros.actions.Node(
    	package='gazebo_ros', 
    	executable='spawn_entity.py',
        arguments=['-entity', 'hunter_v1', '-topic', 'robot_description'],
        output='screen'
    )
    
    return launch.LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true',
            description='Use simulation clock if true'),
        
        DeclareLaunchArgument(name='gui', default_value='false',
                                            description='Flag to enable joint_state_publisher_gui'),
        DeclareLaunchArgument(name='rvizconfig', default_value=default_rviz_config_path,
                                            description='Absolute path to rviz config file'),
        launch.actions.LogInfo(msg='use_sim_time: '),
        launch.actions.LogInfo(msg=launch.substitutions.LaunchConfiguration('use_sim_time')),
        
        launch_ros.actions.Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                'use_sim_time': launch.substitutions.LaunchConfiguration('use_sim_time'),
                'robot_description':robot_description_content
            }]),
        launch.actions.ExecuteProcess(cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so', world_path], output='screen'),
        
        joint_state_publisher_node,
        joint_state_publisher_gui_node,
        spawn_entity,
        rviz_node,
    ])
