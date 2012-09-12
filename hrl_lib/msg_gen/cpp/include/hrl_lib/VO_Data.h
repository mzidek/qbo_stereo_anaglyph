/* Auto-generated by genmsg_cpp for file /opt/ros/electric/stacks/hrl/hrl_lib/msg/VO_Data.msg */
#ifndef HRL_LIB_MESSAGE_VO_DATA_H
#define HRL_LIB_MESSAGE_VO_DATA_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace hrl_lib
{
template <class ContainerAllocator>
struct VO_Data_ {
  typedef VO_Data_<ContainerAllocator> Type;

  VO_Data_()
  : header()
  , x_error()
  , y_error()
  , x_feat_1()
  , y_feat_1()
  , x_feat_2()
  , y_feat_2()
  , focal(0.0)
  , dt(0.0)
  , im_height(0.0)
  , im_width(0.0)
  , time(0.0)
  {
  }

  VO_Data_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , x_error(_alloc)
  , y_error(_alloc)
  , x_feat_1(_alloc)
  , y_feat_1(_alloc)
  , x_feat_2(_alloc)
  , y_feat_2(_alloc)
  , focal(0.0)
  , dt(0.0)
  , im_height(0.0)
  , im_width(0.0)
  , time(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _x_error_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  x_error;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _y_error_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  y_error;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _x_feat_1_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  x_feat_1;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _y_feat_1_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  y_feat_1;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _x_feat_2_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  x_feat_2;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _y_feat_2_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  y_feat_2;

  typedef double _focal_type;
  double focal;

  typedef double _dt_type;
  double dt;

  typedef double _im_height_type;
  double im_height;

  typedef double _im_width_type;
  double im_width;

  typedef double _time_type;
  double time;


  ROS_DEPRECATED uint32_t get_x_error_size() const { return (uint32_t)x_error.size(); }
  ROS_DEPRECATED void set_x_error_size(uint32_t size) { x_error.resize((size_t)size); }
  ROS_DEPRECATED void get_x_error_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->x_error; }
  ROS_DEPRECATED void set_x_error_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->x_error = vec; }
  ROS_DEPRECATED uint32_t get_y_error_size() const { return (uint32_t)y_error.size(); }
  ROS_DEPRECATED void set_y_error_size(uint32_t size) { y_error.resize((size_t)size); }
  ROS_DEPRECATED void get_y_error_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->y_error; }
  ROS_DEPRECATED void set_y_error_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->y_error = vec; }
  ROS_DEPRECATED uint32_t get_x_feat_1_size() const { return (uint32_t)x_feat_1.size(); }
  ROS_DEPRECATED void set_x_feat_1_size(uint32_t size) { x_feat_1.resize((size_t)size); }
  ROS_DEPRECATED void get_x_feat_1_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->x_feat_1; }
  ROS_DEPRECATED void set_x_feat_1_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->x_feat_1 = vec; }
  ROS_DEPRECATED uint32_t get_y_feat_1_size() const { return (uint32_t)y_feat_1.size(); }
  ROS_DEPRECATED void set_y_feat_1_size(uint32_t size) { y_feat_1.resize((size_t)size); }
  ROS_DEPRECATED void get_y_feat_1_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->y_feat_1; }
  ROS_DEPRECATED void set_y_feat_1_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->y_feat_1 = vec; }
  ROS_DEPRECATED uint32_t get_x_feat_2_size() const { return (uint32_t)x_feat_2.size(); }
  ROS_DEPRECATED void set_x_feat_2_size(uint32_t size) { x_feat_2.resize((size_t)size); }
  ROS_DEPRECATED void get_x_feat_2_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->x_feat_2; }
  ROS_DEPRECATED void set_x_feat_2_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->x_feat_2 = vec; }
  ROS_DEPRECATED uint32_t get_y_feat_2_size() const { return (uint32_t)y_feat_2.size(); }
  ROS_DEPRECATED void set_y_feat_2_size(uint32_t size) { y_feat_2.resize((size_t)size); }
  ROS_DEPRECATED void get_y_feat_2_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->y_feat_2; }
  ROS_DEPRECATED void set_y_feat_2_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->y_feat_2 = vec; }
private:
  static const char* __s_getDataType_() { return "hrl_lib/VO_Data"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "68f198b42a714abe05a8e1625896ffa1"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
float64[] x_error\n\
float64[] y_error\n\
float64[] x_feat_1\n\
float64[] y_feat_1\n\
float64[] x_feat_2\n\
float64[] y_feat_2\n\
float64 focal\n\
float64 dt\n\
float64 im_height\n\
float64 im_width\n\
float64 time\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, x_error);
    ros::serialization::serialize(stream, y_error);
    ros::serialization::serialize(stream, x_feat_1);
    ros::serialization::serialize(stream, y_feat_1);
    ros::serialization::serialize(stream, x_feat_2);
    ros::serialization::serialize(stream, y_feat_2);
    ros::serialization::serialize(stream, focal);
    ros::serialization::serialize(stream, dt);
    ros::serialization::serialize(stream, im_height);
    ros::serialization::serialize(stream, im_width);
    ros::serialization::serialize(stream, time);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, x_error);
    ros::serialization::deserialize(stream, y_error);
    ros::serialization::deserialize(stream, x_feat_1);
    ros::serialization::deserialize(stream, y_feat_1);
    ros::serialization::deserialize(stream, x_feat_2);
    ros::serialization::deserialize(stream, y_feat_2);
    ros::serialization::deserialize(stream, focal);
    ros::serialization::deserialize(stream, dt);
    ros::serialization::deserialize(stream, im_height);
    ros::serialization::deserialize(stream, im_width);
    ros::serialization::deserialize(stream, time);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(x_error);
    size += ros::serialization::serializationLength(y_error);
    size += ros::serialization::serializationLength(x_feat_1);
    size += ros::serialization::serializationLength(y_feat_1);
    size += ros::serialization::serializationLength(x_feat_2);
    size += ros::serialization::serializationLength(y_feat_2);
    size += ros::serialization::serializationLength(focal);
    size += ros::serialization::serializationLength(dt);
    size += ros::serialization::serializationLength(im_height);
    size += ros::serialization::serializationLength(im_width);
    size += ros::serialization::serializationLength(time);
    return size;
  }

  typedef boost::shared_ptr< ::hrl_lib::VO_Data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_lib::VO_Data_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct VO_Data
typedef  ::hrl_lib::VO_Data_<std::allocator<void> > VO_Data;

typedef boost::shared_ptr< ::hrl_lib::VO_Data> VO_DataPtr;
typedef boost::shared_ptr< ::hrl_lib::VO_Data const> VO_DataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hrl_lib::VO_Data_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hrl_lib::VO_Data_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hrl_lib

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hrl_lib::VO_Data_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hrl_lib::VO_Data_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hrl_lib::VO_Data_<ContainerAllocator> > {
  static const char* value() 
  {
    return "68f198b42a714abe05a8e1625896ffa1";
  }

  static const char* value(const  ::hrl_lib::VO_Data_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x68f198b42a714abeULL;
  static const uint64_t static_value2 = 0x05a8e1625896ffa1ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_lib::VO_Data_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_lib/VO_Data";
  }

  static const char* value(const  ::hrl_lib::VO_Data_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_lib::VO_Data_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float64[] x_error\n\
float64[] y_error\n\
float64[] x_feat_1\n\
float64[] y_feat_1\n\
float64[] x_feat_2\n\
float64[] y_feat_2\n\
float64 focal\n\
float64 dt\n\
float64 im_height\n\
float64 im_width\n\
float64 time\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::hrl_lib::VO_Data_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hrl_lib::VO_Data_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hrl_lib::VO_Data_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_lib::VO_Data_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.x_error);
    stream.next(m.y_error);
    stream.next(m.x_feat_1);
    stream.next(m.y_feat_1);
    stream.next(m.x_feat_2);
    stream.next(m.y_feat_2);
    stream.next(m.focal);
    stream.next(m.dt);
    stream.next(m.im_height);
    stream.next(m.im_width);
    stream.next(m.time);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct VO_Data_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrl_lib::VO_Data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hrl_lib::VO_Data_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x_error[]" << std::endl;
    for (size_t i = 0; i < v.x_error.size(); ++i)
    {
      s << indent << "  x_error[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x_error[i]);
    }
    s << indent << "y_error[]" << std::endl;
    for (size_t i = 0; i < v.y_error.size(); ++i)
    {
      s << indent << "  y_error[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.y_error[i]);
    }
    s << indent << "x_feat_1[]" << std::endl;
    for (size_t i = 0; i < v.x_feat_1.size(); ++i)
    {
      s << indent << "  x_feat_1[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x_feat_1[i]);
    }
    s << indent << "y_feat_1[]" << std::endl;
    for (size_t i = 0; i < v.y_feat_1.size(); ++i)
    {
      s << indent << "  y_feat_1[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.y_feat_1[i]);
    }
    s << indent << "x_feat_2[]" << std::endl;
    for (size_t i = 0; i < v.x_feat_2.size(); ++i)
    {
      s << indent << "  x_feat_2[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x_feat_2[i]);
    }
    s << indent << "y_feat_2[]" << std::endl;
    for (size_t i = 0; i < v.y_feat_2.size(); ++i)
    {
      s << indent << "  y_feat_2[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.y_feat_2[i]);
    }
    s << indent << "focal: ";
    Printer<double>::stream(s, indent + "  ", v.focal);
    s << indent << "dt: ";
    Printer<double>::stream(s, indent + "  ", v.dt);
    s << indent << "im_height: ";
    Printer<double>::stream(s, indent + "  ", v.im_height);
    s << indent << "im_width: ";
    Printer<double>::stream(s, indent + "  ", v.im_width);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HRL_LIB_MESSAGE_VO_DATA_H
