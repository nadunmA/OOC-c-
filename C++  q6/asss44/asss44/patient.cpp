#include <iostream>
#include "patient.h"
using namespace std;

void patient::setPatientDetails(int paId, string pName)
{
	appoinmentId = paId;
	patientName = pName;
}
void patient::displayPatientDetails()
{
	cout << "appoinmentId = " << appoinmentId << endl;
	cout << "patientName = " << patientName << endl;
}

void patient::setDoctorCharge(double pdCharge)
{
	doctorCharge = pdCharge;
}

void patient::setHospitalCharge(double phCharge)
{
	hospitalCharge = phCharge;
}

int patient::calculateTotalPayment()
{
	return doctorCharge + hospitalCharge;
}
