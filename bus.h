#pragma once
#include "vehicle.h"
class bus :
	public vehicle
{

	int psv;
	int passCapacity;

public:
	bus();
	~bus();

	int getPassCapacity();
	int getPsv();
	void setPassCapacity(int);
	void setPsv(int);


};

