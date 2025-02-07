// Generated by gencpp from file lsd_slam_viewer/keyframeGraphMsg.msg
// DO NOT EDIT!


#ifndef LSD_SLAM_VIEWER_MESSAGE_KEYFRAMEGRAPHMSG_H
#define LSD_SLAM_VIEWER_MESSAGE_KEYFRAMEGRAPHMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lsd_slam_viewer
{
template <class ContainerAllocator>
struct keyframeGraphMsg_
{
  typedef keyframeGraphMsg_<ContainerAllocator> Type;

  keyframeGraphMsg_()
    : numFrames(0)
    , frameData()
    , numConstraints(0)
    , constraintsData()  {
    }
  keyframeGraphMsg_(const ContainerAllocator& _alloc)
    : numFrames(0)
    , frameData(_alloc)
    , numConstraints(0)
    , constraintsData(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _numFrames_type;
  _numFrames_type numFrames;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _frameData_type;
  _frameData_type frameData;

   typedef uint32_t _numConstraints_type;
  _numConstraints_type numConstraints;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _constraintsData_type;
  _constraintsData_type constraintsData;





  typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> const> ConstPtr;

}; // struct keyframeGraphMsg_

typedef ::lsd_slam_viewer::keyframeGraphMsg_<std::allocator<void> > keyframeGraphMsg;

typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeGraphMsg > keyframeGraphMsgPtr;
typedef boost::shared_ptr< ::lsd_slam_viewer::keyframeGraphMsg const> keyframeGraphMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lsd_slam_viewer

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'lsd_slam_viewer': ['/home/tim/ardrone_simulator/src/lsd_slam/lsd_slam_viewer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d23a8a86773b54db7399debf884d0c9e";
  }

  static const char* value(const ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd23a8a86773b54dbULL;
  static const uint64_t static_value2 = 0x7399debf884d0c9eULL;
};

template<class ContainerAllocator>
struct DataType< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lsd_slam_viewer/keyframeGraphMsg";
  }

  static const char* value(const ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# data as serialization of sim(3)'s: (int id, float[7] camToWorld)\n\
uint32 numFrames\n\
uint8[] frameData\n\
\n\
\n\
# constraints (int from, int to, float err)\n\
uint32 numConstraints\n\
uint8[] constraintsData\n\
";
  }

  static const char* value(const ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.numFrames);
      stream.next(m.frameData);
      stream.next(m.numConstraints);
      stream.next(m.constraintsData);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct keyframeGraphMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lsd_slam_viewer::keyframeGraphMsg_<ContainerAllocator>& v)
  {
    s << indent << "numFrames: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.numFrames);
    s << indent << "frameData[]" << std::endl;
    for (size_t i = 0; i < v.frameData.size(); ++i)
    {
      s << indent << "  frameData[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.frameData[i]);
    }
    s << indent << "numConstraints: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.numConstraints);
    s << indent << "constraintsData[]" << std::endl;
    for (size_t i = 0; i < v.constraintsData.size(); ++i)
    {
      s << indent << "  constraintsData[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.constraintsData[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSD_SLAM_VIEWER_MESSAGE_KEYFRAMEGRAPHMSG_H
