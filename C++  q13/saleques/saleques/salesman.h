#include <iostream>
using namespace std;

class Salesman {
private:
	int salesmanId;
	string salesmanName;
	double salary;
	int contactNo;

public:
	void setSalesmanDetails(int sId, string sName, double sSalary, int sCno);
	void displaySalesmanDetails();
	void setSalesmanContactNo();
};
