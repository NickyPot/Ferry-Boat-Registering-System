#include "vehicle.h"
#include <string>
using namespace std;



vehicle::vehicle()
{
	mlength = 0;
	mregNumber = "not registered yet";
}


vehicle::~vehicle()
{
}

void vehicle::setLength(int length)
{
	mlength = length;
}
void vehicle::setRegNumber(string regNumber)
{
	mregNumber = regNumber;
}

int vehicle::getLength()
{
	return mlength;

}

string vehicle::getRegNumber()
{
	return mregNumber;

}
