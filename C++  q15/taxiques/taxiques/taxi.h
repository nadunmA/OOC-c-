#include <iostream>
using namespace std;

class Taxi {
private:
	int taxiId;
	string driver;
	int ratePerKm;
	int distanceTravelled;

public:
	void setTaxiDetails(int tId, string tDriver, int tPerKm, int tTravelled);
	void displayTaxiDetails();
	float calculateBill();

};