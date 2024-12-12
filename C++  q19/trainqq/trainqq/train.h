#include <iostream>
using namespace std;

class train {
private:
	int trainId;
	int capacity;
	string startTime;
	string destination;

public:
	void setTrainDetails(int tId, int tCapacity, string tsTime, string tDestination);
	void displayTrainDetails();
	void setStartTime();
};