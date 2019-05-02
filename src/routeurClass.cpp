#include "routeurClass.hpp"

routeur::routeur()
{
}

routeur::~routeur()
{
}

static void routeur::trameCallBack(const std_msgs::ByteMultiArray& msg)
{
	buff.push_back(vector<uint8_t>(MAX_LENGTH_TRAME));
	int buffLength=buff.size();
	for (int i=0;i<MAX_LENGTH_TRAME;i++)
	{
		buff[buffLength-1][i]=msg.data[i];
	}
}
