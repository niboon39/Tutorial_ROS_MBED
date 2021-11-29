#include"mbed.h"
#include <ros.h>
#include <std_msgs/String.h>

ros::NodeHandle  nh;

std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);

char hello[] = "hello world! stm32";

DigitalOut led = LED1;

int main() {
    nh.initNode();
    nh.advertise(chatter);

    while (1) {
        led = !led;
        str_msg.data = hello;
        chatter.publish( &str_msg );
        nh.spinOnce();
        wait_ms(100);
    }
}