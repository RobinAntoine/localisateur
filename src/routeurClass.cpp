#include "routeurClass.hpp"

routeur::routeur()
{
}

routeur::~routeur()
{
}

void routeur::trameCallBack(const std_msgs::ByteMultiArray& msg)
{
	buff.push_back(vector<uint8_t>(MAX_LENGTH_TRAME));

}
