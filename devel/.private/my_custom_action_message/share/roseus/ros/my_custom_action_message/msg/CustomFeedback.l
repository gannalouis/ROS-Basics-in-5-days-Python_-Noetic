;; Auto-generated. Do not edit!


(when (boundp 'my_custom_action_message::CustomFeedback)
  (if (not (find-package "MY_CUSTOM_ACTION_MESSAGE"))
    (make-package "MY_CUSTOM_ACTION_MESSAGE"))
  (shadow 'CustomFeedback (find-package "MY_CUSTOM_ACTION_MESSAGE")))
(unless (find-package "MY_CUSTOM_ACTION_MESSAGE::CUSTOMFEEDBACK")
  (make-package "MY_CUSTOM_ACTION_MESSAGE::CUSTOMFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude CustomFeedback.msg.html


(defclass my_custom_action_message::CustomFeedback
  :super ros::object
  :slots (_return_value ))

(defmethod my_custom_action_message::CustomFeedback
  (:init
   (&key
    ((:return_value __return_value) 0.0)
    )
   (send-super :init)
   (setq _return_value (float __return_value))
   self)
  (:return_value
   (&optional __return_value)
   (if __return_value (setq _return_value __return_value)) _return_value)
  (:serialization-length
   ()
   (+
    ;; float32 _return_value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _return_value
       (sys::poke _return_value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _return_value
     (setq _return_value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_custom_action_message::CustomFeedback :md5sum-) "9ad3a54690081d42d1aba5dbffa1b504")
(setf (get my_custom_action_message::CustomFeedback :datatype-) "my_custom_action_message/CustomFeedback")
(setf (get my_custom_action_message::CustomFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
float32 return_value

")



(provide :my_custom_action_message/CustomFeedback "9ad3a54690081d42d1aba5dbffa1b504")


