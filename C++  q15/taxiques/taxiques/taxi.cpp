#include <iostream>
#include "taxi.h"
using namespace std;

void Taxi::setTaxiDetails(int tId, string tDriver, int tPerKm, int tTravelled)
{
	taxiId = tId;
	driver = tDriver;
	ratePerKm = tPerKm;
	distanceTravelled = tTravelled;
}

void Taxi::displayTaxiDetails()
{
	cout << "taxiId : " << taxiId << endl;
	cout << "driver : " << driver << endl;

}

float Taxi::calculateBill()
{
	return ratePerKm * distanceTravelled;
}