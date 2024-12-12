#include <iostream>
#include "salesman.h"
using namespace std;


int main()
{
    Salesman *s1 = new Salesman();
    Salesman *s2 = new Salesman();
    Salesman *s3 = new Salesman();

    s1->setSalesmanDetails(1, "Jhon", 30000, 011223344);
    s2->setSalesmanDetails(2, "Ann", 40000, 0112004340);
    s3->setSalesmanDetails(3, "Leema", 35000, 011454332);

    s1->setSalesmanContactNo();
    s2->setSalesmanContactNo();
    s3->setSalesmanContactNo();

    cout << endl;

    s1->displaySalesmanDetails();
    s2->displaySalesmanDetails();
    s3->displaySalesmanDetails();

    delete s1, s2, s3;
}


