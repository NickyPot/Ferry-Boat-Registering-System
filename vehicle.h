#pragma once
#include <string>
using namespace std;
class vehicle
{

	int mlength;
	string mregNumber;


public:
	vehicle();
	~vehicle();

	void setRegNumber(string);
	string getRegNumber();
	void setLength(int);
	int getLength();
};

