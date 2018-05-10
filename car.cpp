#include "car.h"
#include <string>
using namespace std;



car::car()
{
	seatsNum = 0;
}


car::~car()
{
}

void car::setSeatsNum(int seats)
{
	seatsNum = seats;
}

int car::getSeatsNum()
{
	return seatsNum;
}
