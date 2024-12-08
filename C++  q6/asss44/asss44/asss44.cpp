#include <iostream>
#include "patient.h"
using namespace std;


int main()
{
    patient p1, p2;

    p1.setPatientDetails(1001, "Nimal");
    p2.setPatientDetails(1002, "Sunil");

    p1.setDoctorCharge(1500);
    p2.setDoctorCharge(1700);

    p1.setHospitalCharge(500);
    p2.setHospitalCharge(500);

    p1.displayPatientDetails();
    cout << "Total payment : " << p1.calculateTotalPayment() << endl << endl;

    p2.displayPatientDetails();
    cout << "Total payment : " << p2.calculateTotalPayment() << endl << endl;

}

