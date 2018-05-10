#include "artLorry.h"



artLorry::artLorry()
{
	cabLength = 0;
	trailerLength = 0;
}


artLorry::~artLorry()
{
}

void artLorry::setCablength(int clength)
{
	cabLength = clength;
}
void artLorry::setTrailerLength(int tLength)
{
	trailerLength = tLength;
}


int artLorry::getTrailerLength()
{
	return trailerLength;
}

int artLorry::getCabLength()
{
	return cabLength;
}

