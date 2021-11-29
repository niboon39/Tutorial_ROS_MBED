#include "mbed.h"
#include "ros.h"
#include "std_msgs/Empty.h"

ros::NodeHandle nh ; 
DigitalOut led(LED1) ; // Debug : Working 

// Call back function 
void messageCb(const std_msgs::Empty& toggle_msg){
    led = !led ; // blink led 
}

ros::Subscriber<std_msgs::Empty> sub("toggle_led" , &messageCb) ;  // If sub led is on 

int main (){
    nh.initNode() ; 
    nh.subscribe(sub) ;  

    while (1)
    {
        /* code */
        nh.spinOnce();
        wait_ms(1) ; 
    }
    
}
/*
* 1. roscore 
* 2. sudo chmod 777 /dev/ttyxxx    xxx:Port
* 3. rosrun rosserial_python serial_node.py /dev/ttyxxx 
* 4. rostopic pub -1 /toggle_led std_msgs/Empty "{}"
*/

