#include <iostream>
#include <std_msgs/ByteMultiArray.h>
#include <vector>
#include <stdint.h>

#include <paramateur.hpp>
extern int MAX_LENGTH_TRAME;

using namespace std;

class routeur
{
	public:
	routeur();
	~routeur();

	static void trameCallBack(const std_msgs::ByteMultiArray& msg);

	private:
	int length;
	vector< vector<uint8_t> > buff;

};

