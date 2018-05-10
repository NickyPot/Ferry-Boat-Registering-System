#pragma once
#include "vehicle.h"
#include <string>
using namespace std;



class car :
	public vehicle
{
	
	int seatsNum;
	


public:
	car();
	~car();
	void setSeatsNum(int);
	int getSeatsNum();
	

};

