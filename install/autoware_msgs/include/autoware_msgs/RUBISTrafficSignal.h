// Generated by gencpp from file autoware_msgs/RUBISTrafficSignal.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_RUBISTRAFFICSIGNAL_H
#define AUTOWARE_MSGS_MESSAGE_RUBISTRAFFICSIGNAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_msgs
{
template <class ContainerAllocator>
struct RUBISTrafficSignal_
{
  typedef RUBISTrafficSignal_<ContainerAllocator> Type;

  RUBISTrafficSignal_()
    : id(0)
    , type(0)
    , time(0.0)  {
    }
  RUBISTrafficSignal_(const ContainerAllocator& _alloc)
    : id(0)
    , type(0)
    , time(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _type_type;
  _type_type type;

   typedef float _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> const> ConstPtr;

}; // struct RUBISTrafficSignal_

typedef ::autoware_msgs::RUBISTrafficSignal_<std::allocator<void> > RUBISTrafficSignal;

typedef boost::shared_ptr< ::autoware_msgs::RUBISTrafficSignal > RUBISTrafficSignalPtr;
typedef boost::shared_ptr< ::autoware_msgs::RUBISTrafficSignal const> RUBISTrafficSignalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator1> & lhs, const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.type == rhs.type &&
    lhs.time == rhs.time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator1> & lhs, const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9019b7aea1c6b00cf12cfe69ccddab8f";
  }

  static const char* value(const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9019b7aea1c6b00cULL;
  static const uint64_t static_value2 = 0xf12cfe69ccddab8fULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/RUBISTrafficSignal";
  }

  static const char* value(const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"int32 type\n"
"float32 time\n"
;
  }

  static const char* value(const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RUBISTrafficSignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::RUBISTrafficSignal_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "time: ";
    Printer<float>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_RUBISTRAFFICSIGNAL_H
