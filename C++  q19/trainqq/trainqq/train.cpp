#include <iostream>
#include "train.h"
using namespace std;


void train::setTrainDetails(int tId, int tCapacity, string tsTime, string tDestination)
{
	trainId = tId;
	capacity = tCapacity;
	startTime = tsTime;
	destination = tDestination;
}

void train::displayTrainDetails()
{
	cout << "trainId : " << trainId << endl;
	cout << "capacity : " << capacity << endl;
	cout << "start time : " << destination << endl;
	cout << "destination : " << startTime << endl;
}

void train::setStartTime()
{
	cout << "Input new start time of train " << trainId << " : ";
	cin >> startTime;
}