;; Auto-generated. Do not edit!


(when (boundp 'my_custom_action_message::CustomGoal)
  (if (not (find-package "MY_CUSTOM_ACTION_MESSAGE"))
    (make-package "MY_CUSTOM_ACTION_MESSAGE"))
  (shadow 'CustomGoal (find-package "MY_CUSTOM_ACTION_MESSAGE")))
(unless (find-package "MY_CUSTOM_ACTION_MESSAGE::CUSTOMGOAL")
  (make-package "MY_CUSTOM_ACTION_MESSAGE::CUSTOMGOAL"))

(in-package "ROS")
;;//! \htmlinclude CustomGoal.msg.html


(defclass my_custom_action_message::CustomGoal
  :super ros::object
  :slots (_number ))

(defmethod my_custom_action_message::CustomGoal
  (:init
   (&key
    ((:number __number) 0)
    )
   (send-super :init)
   (setq _number (round __number))
   self)
  (:number
   (&optional __number)
   (if __number (setq _number __number)) _number)
  (:serialization-length
   ()
   (+
    ;; int32 _number
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _number
       (write-long _number s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _number
     (setq _number (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_custom_action_message::CustomGoal :md5sum-) "2474488a3908093ec1307bdd5b35815e")
(setf (get my_custom_action_message::CustomGoal :datatype-) "my_custom_action_message/CustomGoal")
(setf (get my_custom_action_message::CustomGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal
int32 number

")



(provide :my_custom_action_message/CustomGoal "2474488a3908093ec1307bdd5b35815e")


