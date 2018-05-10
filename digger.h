#pragma once
#include "vehicle.h"
class digger :
	public vehicle
{
	int trackNum;
	int shovelSize;

public:
	digger();
	digger(int);
	~digger();

	int getShovelSize();
	int getTrackNum();
	void setTrackNum(int);
	void setShovelSize(int);


};

