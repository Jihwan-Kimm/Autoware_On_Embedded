// Generated by gencpp from file autoware_config_msgs/ConfigLaneStop.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGLANESTOP_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGLANESTOP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigLaneStop_
{
  typedef ConfigLaneStop_<ContainerAllocator> Type;

  ConfigLaneStop_()
    : header()
    , manual_detection(false)  {
    }
  ConfigLaneStop_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , manual_detection(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _manual_detection_type;
  _manual_detection_type manual_detection;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigLaneStop_

typedef ::autoware_config_msgs::ConfigLaneStop_<std::allocator<void> > ConfigLaneStop;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigLaneStop > ConfigLaneStopPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigLaneStop const> ConfigLaneStopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator1> & lhs, const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.manual_detection == rhs.manual_detection;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator1> & lhs, const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b7e045a50c80411a1e64d2f61b1a0b3";
  }

  static const char* value(const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b7e045a50c80411ULL;
  static const uint64_t static_value2 = 0xa1e64d2f61b1a0b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigLaneStop";
  }

  static const char* value(const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"bool manual_detection\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.manual_detection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigLaneStop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigLaneStop_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "manual_detection: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.manual_detection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGLANESTOP_H
