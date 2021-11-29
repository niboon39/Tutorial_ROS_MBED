#include "ros.h"
#include "mbed.h"
#include "std_msgs/String.h"

//  Set node handle 
ros::NodeHandle nh ; 
//  Set string message 
std_msgs::String str_msg ; 
//  Set Publisher Topic "Chatter : data(str_msg)"
ros::Publisher chatter("Chatter" , &str_msg) ; 

char hello[] = "Fuck u stm32....." ; 

DigitalOut led = LED1 ; 

int main (){
    nh.initNode() ; 
    nh.advertise(chatter) ; 
    while (1)
    {
        /* code */
        led = !led ; 
        str_msg.data = hello ; 
        chatter.publish(&str_msg) ; 
        nh.spinOnce() ; 
        wait_ms(300) ; 
    }
    
}

