;; Auto-generated. Do not edit!


(when (boundp 'my_custom_action_message::CustomResult)
  (if (not (find-package "MY_CUSTOM_ACTION_MESSAGE"))
    (make-package "MY_CUSTOM_ACTION_MESSAGE"))
  (shadow 'CustomResult (find-package "MY_CUSTOM_ACTION_MESSAGE")))
(unless (find-package "MY_CUSTOM_ACTION_MESSAGE::CUSTOMRESULT")
  (make-package "MY_CUSTOM_ACTION_MESSAGE::CUSTOMRESULT"))

(in-package "ROS")
;;//! \htmlinclude CustomResult.msg.html


(defclass my_custom_action_message::CustomResult
  :super ros::object
  :slots (_random_num ))

(defmethod my_custom_action_message::CustomResult
  (:init
   (&key
    ((:random_num __random_num) 0.0)
    )
   (send-super :init)
   (setq _random_num (float __random_num))
   self)
  (:random_num
   (&optional __random_num)
   (if __random_num (setq _random_num __random_num)) _random_num)
  (:serialization-length
   ()
   (+
    ;; float32 _random_num
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _random_num
       (sys::poke _random_num (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _random_num
     (setq _random_num (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_custom_action_message::CustomResult :md5sum-) "4176a749b1704bf728d01e1708640142")
(setf (get my_custom_action_message::CustomResult :datatype-) "my_custom_action_message/CustomResult")
(setf (get my_custom_action_message::CustomResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result
float32 random_num

")



(provide :my_custom_action_message/CustomResult "4176a749b1704bf728d01e1708640142")


