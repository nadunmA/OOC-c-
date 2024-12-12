#include <iostream>
#include "salesman.h"
using namespace std;

void Salesman::setSalesmanDetails(int sId, string sName, double sSalary, int sCno)
{
	salesmanId = sId;
	salesmanName = sName;
	salary = sSalary;
	contactNo = sCno;
}

void Salesman::displaySalesmanDetails()
{
	cout << "salesmanId : " << salesmanId << endl;
	cout << "salesmanName : " << salesmanName << endl;
	cout << "salary : " << salary << endl;
	cout << "contactNo : " << contactNo << endl;

}

void Salesman::setSalesmanContactNo()
{
	cout << "input new contact number of salesman " << salesmanId << " : ";
	cin >> contactNo;
}

