//ROS2 headers
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/joy.hpp"

class TelelopHunter : public rclcpp::Node
{
    public:
        TelelopHunter():Node("HunterRemoteControl"){
            joy_sub_ = this->create_subscription<sensor_msgs::msg::Joy>("/joy",  10, std::bind(&TelelopHunter::joyCallback, this, std::placeholders::_1));
            cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
        }

    private:
        void joyCallback(const sensor_msgs::msg::Joy::SharedPtr joy);

        //Publisher and subscriber
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
        rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_sub_;

        //Joystick intrinsic parameters
        int linear_idx_ = 1;
        int angular_idx_ = 0; 
        int flag = 0;
        double l_scale_ = 0.5; 
        double a_scale_ = 0.3;
};

void TelelopHunter::joyCallback(const sensor_msgs::msg::Joy::SharedPtr joy){
	//if(joy->buttons[5]==1 && joy->axes[linear_idx_] == -1)
		//flag = 1;
	//start event lock
	if(joy->buttons[0]==1)
		flag = 1;
	//start event lock	
    geometry_msgs::msg::Twist twist;
	
    if (flag){
		twist.angular.z = a_scale_ * joy->axes[angular_idx_];
		twist.linear.x = l_scale_ * joy->axes[linear_idx_];
		/*if (joy->buttons[4]==0)//
		    twist.linear.x = l_scale_ * (joy->axes[linear_idx_] + 1);
		else
		    twist.linear.x = -1 * l_scale_ * (joy->axes[linear_idx_] + 1);*/
    }
    
    cmd_vel_pub_->publish(twist);
    
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TelelopHunter>());
  rclcpp::shutdown();
  return 0;
}
