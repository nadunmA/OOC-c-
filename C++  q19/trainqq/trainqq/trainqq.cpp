#include <iostream>
#include "train.h"
using namespace std;



int main()
{
    train t1, t2, t3;

    t1.setTrainDetails(1, 200, "6.30AM", "Kandy");
    t2.setTrainDetails(2, 150, "8.00AM", "Galle");
    t3.setTrainDetails(1, 200, "4.30AM", "Jaffna");

    t1.setStartTime();
    t2.setStartTime();
    t3.setStartTime();

    cout << endl;

    t1.displayTrainDetails();
    t2.displayTrainDetails();
    t3.displayTrainDetails();


}


