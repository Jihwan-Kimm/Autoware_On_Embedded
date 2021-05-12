# -*- coding: utf-8 -*-
from __future__ import print_function

import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/melodic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/melodic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in '/home/hypark/rubis_ws/devel;/home/hypark/autoware.ai/install/ymc;/home/hypark/autoware.ai/install/xsens_driver;/home/hypark/autoware.ai/install/wf_simulator;/home/hypark/autoware.ai/install/lattice_planner;/home/hypark/autoware.ai/install/waypoint_planner;/home/hypark/autoware.ai/install/waypoint_maker;/home/hypark/autoware.ai/install/way_planner;/home/hypark/autoware.ai/install/vlg22c_cam;/home/hypark/autoware.ai/install/vision_ssd_detect;/home/hypark/autoware.ai/install/vision_segment_enet_detect;/home/hypark/autoware.ai/install/vision_lane_detect;/home/hypark/autoware.ai/install/vision_darknet_detect;/home/hypark/autoware.ai/install/vision_beyond_track;/home/hypark/autoware.ai/install/vel_pose_diff_checker;/home/hypark/autoware.ai/install/vehicle_socket;/home/hypark/autoware.ai/install/vehicle_sim_model;/home/hypark/autoware.ai/install/vehicle_model;/home/hypark/autoware.ai/install/vehicle_gazebo_simulation_launcher;/home/hypark/autoware.ai/install/vehicle_gazebo_simulation_interface;/home/hypark/autoware.ai/install/vehicle_engage_panel;/home/hypark/autoware.ai/install/vehicle_description;/home/hypark/autoware.ai/install/trafficlight_recognizer;/home/hypark/autoware.ai/install/op_utilities;/home/hypark/autoware.ai/install/op_simulation_package;/home/hypark/autoware.ai/install/op_local_planner;/home/hypark/autoware.ai/install/op_global_planner;/home/hypark/autoware.ai/install/lidar_kf_contour_track;/home/hypark/autoware.ai/install/op_ros_helpers;/home/hypark/autoware.ai/install/ff_waypoint_follower;/home/hypark/autoware.ai/install/dp_planner;/home/hypark/autoware.ai/install/op_simu;/home/hypark/autoware.ai/install/op_planner;/home/hypark/autoware.ai/install/op_utility;/home/hypark/autoware.ai/install/lidar_euclidean_cluster_detect;/home/hypark/autoware.ai/install/vector_map_server;/home/hypark/autoware.ai/install/road_occupancy_processor;/home/hypark/autoware.ai/install/costmap_generator;/home/hypark/autoware.ai/install/object_map;/home/hypark/autoware.ai/install/naive_motion_predict;/home/hypark/autoware.ai/install/lanelet_aisan_converter;/home/hypark/autoware.ai/install/map_file;/home/hypark/autoware.ai/install/libvectormap;/home/hypark/autoware.ai/install/lane_planner;/home/hypark/autoware.ai/install/imm_ukf_pda_track;/home/hypark/autoware.ai/install/decision_maker;/home/hypark/autoware.ai/install/vector_map;/home/hypark/autoware.ai/install/vector_map_msgs;/home/hypark/autoware.ai/install/vectacam;/home/hypark/autoware.ai/install/udon_socket;/home/hypark/autoware.ai/install/twist_generator;/home/hypark/autoware.ai/install/twist_gate;/home/hypark/autoware.ai/install/twist_filter;/home/hypark/autoware.ai/install/twist2odom;/home/hypark/autoware.ai/install/tablet_socket;/home/hypark/autoware.ai/install/runtime_manager;/home/hypark/autoware.ai/install/mqtt_socket;/home/hypark/autoware.ai/install/tablet_socket_msgs;/home/hypark/autoware.ai/install/state_machine_lib;/home/hypark/autoware.ai/install/sound_player;/home/hypark/autoware.ai/install/sick_lms5xx;/home/hypark/autoware.ai/install/sick_ldmrs_tools;/home/hypark/autoware.ai/install/sick_ldmrs_driver;/home/hypark/autoware.ai/install/sick_ldmrs_msgs;/home/hypark/autoware.ai/install/sick_ldmrs_description;/home/hypark/autoware.ai/install/points2image;/home/hypark/autoware.ai/install/rosinterface;/home/hypark/autoware.ai/install/rosbag_controller;/home/hypark/autoware.ai/install/pure_pursuit;/home/hypark/autoware.ai/install/points_preprocessor;/home/hypark/autoware.ai/install/mpc_follower;/home/hypark/autoware.ai/install/lidar_localizer;/home/hypark/autoware.ai/install/emergency_handler;/home/hypark/autoware.ai/install/autoware_health_checker;/home/hypark/autoware.ai/install/as;/home/hypark/autoware.ai/install/ros_observer;/home/hypark/autoware.ai/install/roi_object_filter;/home/hypark/autoware.ai/install/range_vision_fusion;/home/hypark/autoware.ai/install/pos_db;/home/hypark/autoware.ai/install/points_downsampler;/home/hypark/autoware.ai/install/pixel_cloud_fusion;/home/hypark/autoware.ai/install/pcl_omp_registration;/home/hypark/autoware.ai/install/pc2_downsampler;/home/hypark/autoware.ai/install/oculus_socket;/home/hypark/autoware.ai/install/obj_db;/home/hypark/autoware.ai/install/nmea_navsat;/home/hypark/autoware.ai/install/ndt_tku;/home/hypark/autoware.ai/install/ndt_gpu;/home/hypark/autoware.ai/install/ndt_cpu;/home/hypark/autoware.ai/install/multi_vlp_driver;/home/hypark/autoware.ai/install/multi_vlp_converter;/home/hypark/autoware.ai/install/multi_vlp_combiner;/home/hypark/autoware.ai/install/multi_lidar_calibrator;/home/hypark/autoware.ai/install/mrt_cmake_modules;/home/hypark/autoware.ai/install/microstrain_driver;/home/hypark/autoware.ai/install/memsic_imu;/home/hypark/autoware.ai/install/marker_downsampler;/home/hypark/autoware.ai/install/map_tools;/home/hypark/autoware.ai/install/map_tf_generator;/home/hypark/autoware.ai/install/log_tools;/home/hypark/autoware.ai/install/lidar_shape_estimation;/home/hypark/autoware.ai/install/lidar_point_pillars;/home/hypark/autoware.ai/install/lidar_naive_l_shape_detect;/home/hypark/autoware.ai/install/lidar_fake_perception;/home/hypark/autoware.ai/install/lidar_apollo_cnn_seg_detect;/home/hypark/autoware.ai/install/libwaypoint_follower;/home/hypark/autoware.ai/install/lgsvl_simulator_bridge;/home/hypark/autoware.ai/install/lanelet2_extension;/home/hypark/autoware.ai/install/lanelet2_validation;/home/hypark/autoware.ai/install/lanelet2_examples;/home/hypark/autoware.ai/install/lanelet2_python;/home/hypark/autoware.ai/install/lanelet2_routing;/home/hypark/autoware.ai/install/lanelet2_traffic_rules;/home/hypark/autoware.ai/install/lanelet2_projection;/home/hypark/autoware.ai/install/lanelet2_maps;/home/hypark/autoware.ai/install/lanelet2_io;/home/hypark/autoware.ai/install/lanelet2_core;/home/hypark/autoware.ai/install/kvaser;/home/hypark/autoware.ai/install/kitti_launch;/home/hypark/autoware.ai/install/kitti_player;/home/hypark/autoware.ai/install/kitti_box_publisher;/home/hypark/autoware.ai/install/javad_navsat_driver;/home/hypark/autoware.ai/install/integrated_viewer;/home/hypark/autoware.ai/install/image_processor;/home/hypark/autoware.ai/install/hokuyo;/home/hypark/autoware.ai/install/graph_tools;/home/hypark/autoware.ai/install/gnss_localizer;/home/hypark/autoware.ai/install/gnss;/home/hypark/autoware.ai/install/glviewer;/home/hypark/autoware.ai/install/gazebo_world_description;/home/hypark/autoware.ai/install/gazebo_imu_description;/home/hypark/autoware.ai/install/gazebo_camera_description;/home/hypark/autoware.ai/install/garmin;/home/hypark/autoware.ai/install/freespace_planner;/home/hypark/autoware.ai/install/fastvirtualscan;/home/hypark/autoware.ai/install/ekf_localizer;/home/hypark/autoware.ai/install/ds4_msgs;/home/hypark/autoware.ai/install/ds4_driver;/home/hypark/autoware.ai/install/detected_objects_visualizer;/home/hypark/autoware.ai/install/decision_maker_panel;/home/hypark/autoware.ai/install/data_preprocessor;/home/hypark/autoware.ai/install/custom_msgs;/home/hypark/autoware.ai/install/carla_autoware_bridge;/home/hypark/autoware.ai/install/calibration_publisher;/home/hypark/autoware.ai/install/autoware_system_msgs;/home/hypark/autoware.ai/install/autoware_rviz_plugins;/home/hypark/autoware.ai/install/autoware_quickstart_examples;/home/hypark/autoware.ai/install/autoware_pointgrey_drivers;/home/hypark/autoware.ai/install/autoware_driveworks_interface;/home/hypark/autoware.ai/install/autoware_connector;/home/hypark/autoware.ai/install/autoware_camera_lidar_calibrator;/home/hypark/autoware.ai/install/astar_search;/home/hypark/autoware.ai/install/amathutils_lib;/home/hypark/autoware.ai/install/autoware_msgs;/home/hypark/autoware.ai/install/autoware_map_msgs;/home/hypark/autoware.ai/install/autoware_launcher_rviz;/home/hypark/autoware.ai/install/autoware_launcher;/home/hypark/autoware.ai/install/autoware_lanelet2_msgs;/home/hypark/autoware.ai/install/autoware_external_msgs;/home/hypark/autoware.ai/install/autoware_driveworks_gmsl_interface;/home/hypark/autoware.ai/install/autoware_config_msgs;/home/hypark/autoware.ai/install/autoware_can_msgs;/home/hypark/autoware.ai/install/autoware_build_flags;/home/hypark/autoware.ai/install/autoware_bag_tools;/home/hypark/autoware.ai/install/adi_driver;/opt/ros/melodic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/hypark/git/Autoware_On_Embedded/build/autoware_build_flags/devel/env.sh')

output_filename = '/home/hypark/git/Autoware_On_Embedded/build/autoware_build_flags/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
