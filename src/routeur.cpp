#include <ros/ros.h>
#include <iostream>

using namespace std;


int main(int argc, char **argv)
{

	
	ros::init(argc, argv,"routeur");
	ros::NodeHandle n;

	//ros::Subscriber image_sub_ = n.subscribe("/camera/rgb/image_color", 1,imageCb);

	ros::Rate r(20);


	while(ros::ok())
	{
		

		ros::spinOnce();
		r.sleep();

	}
	return 0;

}
