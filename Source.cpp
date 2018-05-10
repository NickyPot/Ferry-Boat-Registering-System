#include <iostream>
#include <string>
#include "Ferry.h"
#include "vehicle.h"
#include "car.h"
using namespace std;



int main()
{
	Ferry ferry[5];
	
	ferry[0].setCapacity(100);
	ferry[1].setCapacity(400);
	ferry[2].setCapacity(20);
	ferry[3].setCapacity(300);
	int userIn;
	int vehIn;
	int carLength;
	string regNumber;
	int seatNum;
	int psv;
	int passCapacity;
	int lorryVar;
	int maxLoad;
	int cLength;
	int tLength;
	int trackNumber;
	int shovelSize;

	for (;;) {
		//choose which ferry you want to use
		cout << "Which ferry is being used?\n";
		cin >> userIn;
		cout << "The capacity of the ferry is " << ferry[userIn].getCapacity();
		//choose which ferry you want to use

		for (;;) {
			//input what type of vehicle you want to load in
			cout << "input what type of vehicle you want to load in: car 01, bus 02, lorry 03, digger 04, press 0 to exit and see the report.";
			cin >> vehIn;

			switch (vehIn) {
				//car
			case 1:

				for (int a = 0; a < 10; a++) {
					cout << "The vehicle that has been selected is: car ";
					cout << "What is the length of the car? If you are done with inputing cars, type in 0 ";
					cin >> carLength;
					if (carLength == 0)
					{
						break;
					}
					else {
						ferry[userIn].car[a].setLength(carLength);
						cout << "What is the registration number?";
						cin >> regNumber;
						ferry[userIn].car[a].setRegNumber(regNumber);
						//cout<< ferry[userIn].car[0].getRegNumber()<< ferry[userIn].car[0].getLength();
						cout << "What is the seat number?";
						cin >> seatNum;
						ferry[userIn].car[a].setSeatsNum(seatNum);
						
						//car
					}
				}
				break;
			case 2://bus
				for (int a = 0; a < 10; a++) {
					cout << "The vehicle that has been selected is: bus ";
					cout << "What is the length of the bus? If you are done with inputing buses, type in 0 ";
					cin >> carLength;
					if (carLength == 0)
					{
						break;
					}
					else {
						ferry[userIn].bus[a].setLength(carLength);
						cout << "What is the PSV number?";
						cin >> psv;
						ferry[userIn].bus[a].setPsv(psv);
						//cout<< ferry[userIn].car[0].getRegNumber()<< ferry[userIn].car[0].getLength();
						cout << "What is the passenger capacity?";
						cin >> passCapacity;
						ferry[userIn].bus[a].setPassCapacity(passCapacity);
						cout << "What is the registration number?";
						cin >> regNumber;
						ferry[userIn].bus[a].setRegNumber(regNumber);
						//bus
						
					}
				}
				break;


			case 3:
				cout << "The vehicle that has been selected is: lorry";
				cout << "Is it a normal lorry (1) or an articulated lorry(2)?";
				cin >> lorryVar;
				if (lorryVar == 1)
				{
					for (int a = 0; a < 10; a++) {
						cout << "The vehicle that has been selected is: normal lorry ";
						cout << "What is the length of the lorry? If you are done with inputing lorries, type in 0 ";
						cin >> carLength;
						if (carLength == 0)
						{
							break;
						}
						else {
							ferry[userIn].lorry[a].setLength(carLength);
							cout << "What is the registration number?";
							cin >> regNumber;
							ferry[userIn].lorry[a].setRegNumber(regNumber);
							//cout<< ferry[userIn].car[0].getRegNumber()<< ferry[userIn].car[0].getLength();
							cout << "What is the maximum load?";
							cin >> maxLoad;
							ferry[userIn].lorry[a].setMaxLoad(maxLoad);

							//car
						}
					}
					break;
				}
				else if (lorryVar == 2)
				{
					for (int a = 0; a < 10; a++) {
						cout << "The vehicle that has been selected is: articulated lorry ";
						cout << "What is the length of the lorry? If you are done with inputing lorries, type in 0 ";
						cin >> carLength;
						if (carLength == 0)
						{
							break;
						}
						else {
							ferry[userIn].artLorry[a].setLength(carLength);
							cout << "What is the registration number?";
							cin >> regNumber;
							ferry[userIn].artLorry[a].setRegNumber(regNumber);
							//cout<< ferry[userIn].car[0].getRegNumber()<< ferry[userIn].car[0].getLength();
							cout << "What is the cab length?";
							cin >> cLength;
							ferry[userIn].artLorry[a].setCablength(cLength);
							cout << "What is the trailer length?";
							cin >> tLength;
							ferry[userIn].artLorry[a].setTrailerLength(tLength);

							//car
						}
					}
					break;

				}

			case 4:
				for (int a = 0; a < 10; a++) {
					cout << "The vehicle that has been selected is: digger ";
					cout << "What is the length of the digger? If you are done with inputing diggers, type in 0 ";
					cin >> carLength;
					if (carLength == 0)
					{
						break;
					}
					else {
						ferry[userIn].digger[a].setLength(carLength);
						cout << "What is the number of tracks?";
						cin >> trackNumber;
						ferry[userIn].digger[a].setTrackNum(psv);
						//cout<< ferry[userIn].car[0].getRegNumber()<< ferry[userIn].car[0].getLength();
						cout << "What is the shovel size? If you want to use the standard shovel size, press 0";
						cin >> shovelSize;
						if (shovelSize == 0)
						{
							ferry[userIn].digger[a].setShovelSize(40);
							
						}
						else
						{
							ferry[userIn].digger[a].setShovelSize(shovelSize);
							
						}
						//ferry[userIn].bus[a].setPassCapacity(passCapacity);
						cout << "What is the registration number?";
						cin >> regNumber;
						ferry[userIn].digger[a].setRegNumber(regNumber);
						//bus

					}
				}
				break;

			case 0:
				goto report;
				break;

			}
			

		}
		//report print out
	report:
		cout << "For which Ferry do you want a report of?";
		cin >> userIn;
		cout << "Report:";
		cout << "cars: \n";

		//make a function out of this and repeat it for all types of vehicles, shouldnt be too dificult
		for (int a = 0; a < 10; a++)
		{
			cout <<"Car Lenghth: " <<ferry[userIn].car[a].getLength()<<" Registration Number: " << ferry[userIn].car[a].getRegNumber()<<" Seats Number: " << ferry[userIn].car[a].getSeatsNum()<<"\n";

		}

		cout << "buses: \n";

		//make a function out of this and repeat it for all types of vehicles, shouldnt be too dificult
		for (int a = 0; a < 10; a++)
		{
			cout << "Bus Lenghth: " << ferry[userIn].bus[a].getLength() << " Registration Number: " << ferry[userIn].bus[a].getRegNumber() << " Passenger Capacity: " << ferry[userIn].bus[a].getPassCapacity() << " PSV Number: "<<ferry[userIn].bus[a].getPsv()<<"\n";

		}

		cout << "Normal Lorries: \n";

		//make a function out of this and repeat it for all types of vehicles, shouldnt be too dificult
		for (int a = 0; a < 10; a++)
		{
			cout << "Lorry Lenghth: " << ferry[userIn].lorry[a].getLength() << " Registration Number: " << ferry[userIn].lorry[a].getRegNumber() << " Maximum Load: " << ferry[userIn].lorry[a].getMaxLoad() << "\n";

		}

		cout << "Articulated Lorries: \n";

		//make a function out of this and repeat it for all types of vehicles, shouldnt be too dificult
		for (int a = 0; a < 10; a++)
		{
			cout << "Lorry Lenghth: " << ferry[userIn].artLorry[a].getLength() << " Registration Number: " << ferry[userIn].artLorry[a].getRegNumber() << " Cab Length: " << ferry[userIn].artLorry[a].getCabLength() << "Trailer Length: "<< ferry[userIn].artLorry[a].getTrailerLength()<<" Max Load:  "<<ferry[userIn].artLorry[a].getMaxLoad()<<"\n";

		}


		cout << "diggers: \n";

		//make a function out of this and repeat it for all types of vehicles, shouldnt be too dificult
		for (int a = 0; a < 10; a++)
		{
			cout << "Digger Lenght: " << ferry[userIn].digger[a].getLength() << " Registration Number: " << ferry[userIn].digger[a].getRegNumber() << " Track Number: " << ferry[userIn].digger[a].getTrackNum()<<" Shovel Size: "<<ferry[userIn].digger[a].getShovelSize() << "\n";

		}
		//report print out

		//input what type of vehicle you want to load in

	}
}