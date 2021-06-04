// Generated by gencpp from file my_custom_action_message/CustomAction.msg
// DO NOT EDIT!


#ifndef MY_CUSTOM_ACTION_MESSAGE_MESSAGE_CUSTOMACTION_H
#define MY_CUSTOM_ACTION_MESSAGE_MESSAGE_CUSTOMACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <my_custom_action_message/CustomActionGoal.h>
#include <my_custom_action_message/CustomActionResult.h>
#include <my_custom_action_message/CustomActionFeedback.h>

namespace my_custom_action_message
{
template <class ContainerAllocator>
struct CustomAction_
{
  typedef CustomAction_<ContainerAllocator> Type;

  CustomAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  CustomAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::my_custom_action_message::CustomActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::my_custom_action_message::CustomActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::my_custom_action_message::CustomActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::my_custom_action_message::CustomAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_custom_action_message::CustomAction_<ContainerAllocator> const> ConstPtr;

}; // struct CustomAction_

typedef ::my_custom_action_message::CustomAction_<std::allocator<void> > CustomAction;

typedef boost::shared_ptr< ::my_custom_action_message::CustomAction > CustomActionPtr;
typedef boost::shared_ptr< ::my_custom_action_message::CustomAction const> CustomActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_custom_action_message::CustomAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_custom_action_message::CustomAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_custom_action_message::CustomAction_<ContainerAllocator1> & lhs, const ::my_custom_action_message::CustomAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_custom_action_message::CustomAction_<ContainerAllocator1> & lhs, const ::my_custom_action_message::CustomAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_custom_action_message

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_custom_action_message::CustomAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_custom_action_message::CustomAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_custom_action_message::CustomAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39cf63b8007320c18245c00e855f3bbf";
  }

  static const char* value(const ::my_custom_action_message::CustomAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39cf63b8007320c1ULL;
  static const uint64_t static_value2 = 0x8245c00e855f3bbfULL;
};

template<class ContainerAllocator>
struct DataType< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_custom_action_message/CustomAction";
  }

  static const char* value(const ::my_custom_action_message::CustomAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"CustomActionGoal action_goal\n"
"CustomActionResult action_result\n"
"CustomActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: my_custom_action_message/CustomActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"CustomGoal goal\n"
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
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: my_custom_action_message/CustomGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal\n"
"int32 number\n"
"\n"
"================================================================================\n"
"MSG: my_custom_action_message/CustomActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"CustomResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: my_custom_action_message/CustomResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result\n"
"float32 random_num\n"
"\n"
"================================================================================\n"
"MSG: my_custom_action_message/CustomActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"CustomFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: my_custom_action_message/CustomFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"float32 return_value\n"
;
  }

  static const char* value(const ::my_custom_action_message::CustomAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_custom_action_message::CustomAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_custom_action_message::CustomAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::my_custom_action_message::CustomActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::my_custom_action_message::CustomActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::my_custom_action_message::CustomActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_CUSTOM_ACTION_MESSAGE_MESSAGE_CUSTOMACTION_H
