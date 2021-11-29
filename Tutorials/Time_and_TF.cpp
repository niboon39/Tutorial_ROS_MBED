#include "mbed.h"
#include "ros.h"
#include "ros/time.h"
#include "tf/transform_broadcaster.h"

ros::NodeHandle nh ; 

geometry_msgs::TransformStamped t ; 
tf:: TransformBroadcaster broadcaster ; 

char base_link[] = "/base_link" ; 
char odom[] = "/odom" ; 

int main (){
    nh.initNode() ; 
    broadcaster.init(nh) ; 

    while (1)
    {
        /* code */
        t.header.frame_id = odom ; 
        t.child_frame_id = base_link ; 
        t.transform.translation.x  = 1.0 ; 
        t.transform.rotation.x  = 0.0 ; 
        t.transform.rotation.y = 0.0 ; 
        t.transform.rotation.z = 0.0 ; 
        t.transform.rotation.w = 1.0 ; 
        t.header.stamp = nh.now() ; 
        broadcaster.sendTransform(t) ; 
        nh.spinOnce() ; 
        wait_ms(10) ; 
    }
    
}

/*
* 1. roscore 
* 2. sudo chmod 777 /dev/ttyxxx    xxx:Port
* 3. rosrun rosserial_python serial_node.py /dev/ttyxxx 
* 4. rviz
*/