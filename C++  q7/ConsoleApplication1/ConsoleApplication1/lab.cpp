#include <iostream>
#include "lab.h"
using namespace std;

void Lab::setLabDetails(int lId, int lCapacity)
{
	labId = lId;
	capacity = lCapacity;
}

int Lab::getCapacity()
{
	return capacity;
}