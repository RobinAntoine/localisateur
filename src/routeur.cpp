#include <ros/ros.h>
#include <iostream>
#include <std_msgs/ByteMultiArray.h>

using namespace std;

void inputCallBack (const std_msgs::ByteMultiArray& msg)
{
	cout	<<"Hello"<<endl;
}

int main(int argc, char **argv)
{

	//initialization of the ros node
	ros::init(argc, argv,"routeur");
	ros::NodeHandle n;

	//add the input topic
	ros::Subscriber image_sub_ = n.subscribe("/emissionCanal", 100,inputCallBack);

	ros::Rate r(20);


	while(ros::ok())
	{
		

		ros::spinOnce();
		r.sleep();

	}
	return 0;

}
