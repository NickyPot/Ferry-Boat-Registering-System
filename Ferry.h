#pragma once
#include"vehicle.h"
#include "car.h"
#include"bus.h"
#include "digger.h"
#include "lorry.h"
#include "artLorry.h"
class Ferry
{
private:
	int capacity;


public:
	Ferry();
	~Ferry();

	car car[10];
	bus bus[10];
	digger digger[10];
	lorry lorry[10];
	artLorry artLorry[10];

	int getCapacity();
	void setCapacity(int);


};