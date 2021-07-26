#include <ros/ros.h>
#include <ros_autorunner_lib/ros_autorunner.h>

// Include subscribe message type
#include <sensor_msgs/PointCloud2.h>
#include <autoware_msgs/NDTStat.h>
#include <visualization_msgs/MarkerArray.h>
#define TOTAL_STEP_NUM 4 // Need to change when total step number is changed
#define SLEEP_PERIOD 1

class MinicarLaneKeeping : public AutorunnerBase{
private:    
    ros::NodeHandle     nh_;
    ROSAutorunner        ros_autorunner_;
private:
    virtual void register_subscribers();
private:
    void points_no_ground_cb(const sensor_msgs::PointCloud2& msg);
    void ndt_stat_cb(const autoware_msgs::NDTStat& msg);
    void behavior_state_cb(const visualization_msgs::MarkerArray& msg);

public:
    Sub_v               sub_v_;
public:
    MinicarLaneKeeping() {}
    MinicarLaneKeeping(ros::NodeHandle nh) : nh_(nh){}
    virtual void Run();
};
