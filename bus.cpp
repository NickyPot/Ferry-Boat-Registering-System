#include "bus.h"



bus::bus()
{
	psv = 0;
	passCapacity = 0;
	
}


bus::~bus()
{
}

void bus::setPsv(int number)
{
	psv = number;
}

void bus::setPassCapacity(int passengers)
{
	passCapacity = passengers;
}

int bus::getPassCapacity()
{
	return passCapacity;
}

int bus::getPsv()
{
	return psv;
}