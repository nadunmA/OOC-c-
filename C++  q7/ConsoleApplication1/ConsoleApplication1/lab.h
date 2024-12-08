#include <iostream>
using namespace std;

class Lab {
private:
	int labId;
	int capacity;

public:
	void setLabDetails(int lId, int lCapacity);
	int getCapacity();
};