#include "lorry.h"



lorry::lorry()
{
	maxLoad = 0;
}


lorry::~lorry()
{
}

int lorry::getMaxLoad()
{
	return maxLoad;
}

void lorry::setMaxLoad(int load)
{
	maxLoad = load;
}
