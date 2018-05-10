#include "digger.h"



digger::digger()
{
	shovelSize = 20;//standard size
}
digger::digger(int sSize)
{
	setShovelSize(sSize);
}


digger::~digger()
{
}

int digger::getShovelSize()
{
	return shovelSize;
}

int digger::getTrackNum()
{
	return trackNum;
}

void digger::setShovelSize(int sSize)
{
	shovelSize = sSize;
}

void digger::setTrackNum(int tNum)
{
	trackNum = tNum;
}
