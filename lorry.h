#pragma once
#include "vehicle.h"
class lorry :
	public vehicle
{
	int maxLoad;

public:
	lorry();
	~lorry();

	void setMaxLoad(int);
	int getMaxLoad();

};

