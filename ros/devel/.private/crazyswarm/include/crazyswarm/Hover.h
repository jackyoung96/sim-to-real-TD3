// Generated by gencpp from file crazyswarm/Hover.msg
// DO NOT EDIT!


#ifndef CRAZYSWARM_MESSAGE_HOVER_H
#define CRAZYSWARM_MESSAGE_HOVER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace crazyswarm
{
template <class ContainerAllocator>
struct Hover_
{
  typedef Hover_<ContainerAllocator> Type;

  Hover_()
    : header()
    , vx(0.0)
    , vy(0.0)
    , yawrate(0.0)
    , zDistance(0.0)  {
    }
  Hover_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vx(0.0)
    , vy(0.0)
    , yawrate(0.0)
    , zDistance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _vx_type;
  _vx_type vx;

   typedef float _vy_type;
  _vy_type vy;

   typedef float _yawrate_type;
  _yawrate_type yawrate;

   typedef float _zDistance_type;
  _zDistance_type zDistance;





  typedef boost::shared_ptr< ::crazyswarm::Hover_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyswarm::Hover_<ContainerAllocator> const> ConstPtr;

}; // struct Hover_

typedef ::crazyswarm::Hover_<std::allocator<void> > Hover;

typedef boost::shared_ptr< ::crazyswarm::Hover > HoverPtr;
typedef boost::shared_ptr< ::crazyswarm::Hover const> HoverConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyswarm::Hover_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyswarm::Hover_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::crazyswarm::Hover_<ContainerAllocator1> & lhs, const ::crazyswarm::Hover_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.vx == rhs.vx &&
    lhs.vy == rhs.vy &&
    lhs.yawrate == rhs.yawrate &&
    lhs.zDistance == rhs.zDistance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::crazyswarm::Hover_<ContainerAllocator1> & lhs, const ::crazyswarm::Hover_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace crazyswarm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::Hover_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::Hover_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::Hover_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::Hover_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::Hover_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::Hover_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyswarm::Hover_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d4f46e9fa4dcfdc0516eb081fef369e";
  }

  static const char* value(const ::crazyswarm::Hover_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d4f46e9fa4dcfdcULL;
  static const uint64_t static_value2 = 0x0516eb081fef369eULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyswarm::Hover_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyswarm/Hover";
  }

  static const char* value(const ::crazyswarm::Hover_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyswarm::Hover_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 vx\n"
"float32 vy\n"
"float32 yawrate\n"
"float32 zDistance\n"
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

  static const char* value(const ::crazyswarm::Hover_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyswarm::Hover_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.yawrate);
      stream.next(m.zDistance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Hover_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyswarm::Hover_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyswarm::Hover_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vx: ";
    Printer<float>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<float>::stream(s, indent + "  ", v.vy);
    s << indent << "yawrate: ";
    Printer<float>::stream(s, indent + "  ", v.yawrate);
    s << indent << "zDistance: ";
    Printer<float>::stream(s, indent + "  ", v.zDistance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYSWARM_MESSAGE_HOVER_H
