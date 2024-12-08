#include <iostream>
using namespace std;

class salesman {
private:
	int salesmanId;
	string salesmanName;
	double salesmanSalary;
	int contactNo;

public:
	void setSalesmanDetail(int sId, string sName, double sSalary, int cNo);
	void displaySalesmanDetail();
	void setSalesmanContactNo();
};