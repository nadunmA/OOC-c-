#include <iostream>
#include "doctor.h"
using namespace std;


void salesman::setSalesmanDetail(int sId, string sName, double sSalary, int cNo)
{
	salesmanId = sId;
	salesmanName = sName;
	salesmanSalary = sSalary;
	contactNo = cNo;
}

void salesman::displaySalesmanDetail()
{
	cout << "Salesman Id : " << salesmanId << endl;
	cout << "Salesman Name : " << salesmanName << endl;
	cout << "Salesman Salary : " << salesmanSalary << endl;
	cout << "Contact No : " << contactNo << endl;
	cout << endl;
}
void salesman::setSalesmanContactNo()
{
	cout << "Input new contact number of salesman " << salesmanId << " : ";
	cin >> contactNo;
}
