#include <iostream>
#include "taxi.h"
using namespace std;



int main()
{
    Taxi t1, t2, t3;

    t1.setTaxiDetails(1234, "Ben", 150, 10);
    t2.setTaxiDetails(4321, "Charis", 250, 4);
    t3.setTaxiDetails(3434, "Nick", 175, 2);


   /* t1.displayTaxiDetails();
    t2.displayTaxiDetails();
    t3.displayTaxiDetails();*/
    
    t1.displayTaxiDetails();
    cout << "Bill Amount : " << t1.calculateBill() << endl << endl;

    t2.displayTaxiDetails();
    cout << "Bill Amount : " << t2.calculateBill() << endl << endl;

    t3.displayTaxiDetails();
    cout << "Bill Amount : " << t3.calculateBill() << endl << endl;
  

   

    
  
    

}


