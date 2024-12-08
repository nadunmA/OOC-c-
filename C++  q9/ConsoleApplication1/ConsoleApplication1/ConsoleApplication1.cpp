#include <iostream>
#include "doctor.h"
using namespace std;




int main()
{
	salesman* s1 = new salesman(); 
	salesman* s2 = new salesman();  //dayanamic object
	salesman* s3 = new salesman();

	s1->setSalesmanDetail(1, "Jhon", 30000, 011222222);
	s2->setSalesmanDetail(2, "Ann", 40000, 0113333333);
	s3->setSalesmanDetail(3, "Leema", 50000, 011444444);

	s1->setSalesmanContactNo();
	s2->setSalesmanContactNo();
	s3->setSalesmanContactNo();

	cout << endl;

	s1->displaySalesmanDetail();
	s2->displaySalesmanDetail();
	s3->displaySalesmanDetail();

	delete s1, s2, s3; //dyanamic object delete
}

