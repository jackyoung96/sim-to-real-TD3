// Generated by gencpp from file crazyswarm/NotifySetpointsStopRequest.msg
// DO NOT EDIT!


#ifndef CRAZYSWARM_MESSAGE_NOTIFYSETPOINTSSTOPREQUEST_H
#define CRAZYSWARM_MESSAGE_NOTIFYSETPOINTSSTOPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace crazyswarm
{
template <class ContainerAllocator>
struct NotifySetpointsStopRequest_
{
  typedef NotifySetpointsStopRequest_<ContainerAllocator> Type;

  NotifySetpointsStopRequest_()
    : groupMask(0)
    , remainValidMillisecs(0)  {
    }
  NotifySetpointsStopRequest_(const ContainerAllocator& _alloc)
    : groupMask(0)
    , remainValidMillisecs(0)  {
  (void)_alloc;
    }



   typedef uint8_t _groupMask_type;
  _groupMask_type groupMask;

   typedef uint32_t _remainValidMillisecs_type;
  _remainValidMillisecs_type remainValidMillisecs;





  typedef boost::shared_ptr< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> const> ConstPtr;

}; // struct NotifySetpointsStopRequest_

typedef ::crazyswarm::NotifySetpointsStopRequest_<std::allocator<void> > NotifySetpointsStopRequest;

typedef boost::shared_ptr< ::crazyswarm::NotifySetpointsStopRequest > NotifySetpointsStopRequestPtr;
typedef boost::shared_ptr< ::crazyswarm::NotifySetpointsStopRequest const> NotifySetpointsStopRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator1> & lhs, const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator2> & rhs)
{
  return lhs.groupMask == rhs.groupMask &&
    lhs.remainValidMillisecs == rhs.remainValidMillisecs;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator1> & lhs, const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace crazyswarm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e1e40fcf516d3883bc228627d3e1e43";
  }

  static const char* value(const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e1e40fcf516d388ULL;
  static const uint64_t static_value2 = 0x3bc228627d3e1e43ULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyswarm/NotifySetpointsStopRequest";
  }

  static const char* value(const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 groupMask\n"
"uint32 remainValidMillisecs\n"
;
  }

  static const char* value(const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.groupMask);
      stream.next(m.remainValidMillisecs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NotifySetpointsStopRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyswarm::NotifySetpointsStopRequest_<ContainerAllocator>& v)
  {
    s << indent << "groupMask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.groupMask);
    s << indent << "remainValidMillisecs: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.remainValidMillisecs);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYSWARM_MESSAGE_NOTIFYSETPOINTSSTOPREQUEST_H