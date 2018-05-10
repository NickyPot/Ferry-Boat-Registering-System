#pragma once
#include "lorry.h"
class artLorry :
	public lorry
{

	int cabLength;
	int trailerLength;
public:
	artLorry();
	~artLorry();

	int getCabLength();
	int getTrailerLength();
	void setCablength(int);
	void setTrailerLength(int);


};

