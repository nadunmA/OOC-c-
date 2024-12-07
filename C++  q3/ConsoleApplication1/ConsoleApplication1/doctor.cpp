#include <iostream>
#include "doctor.h"
using namespace std;

void Doctor::setDoctorDetail(int dId, string dName, string dSeoc, string dHospital)
{
	doctorId = dId;
	doctorName = dName;
	spazlaization = dSeoc;
	hospital = dHospital;
}

void Doctor::displayDoctorDetail()
{
	cout << "Doctor id : " << doctorId << endl;
	cout << "Doctor Name : " << doctorName << endl;
	cout << "Specialization : " << spazlaization << endl;
	cout << "Hospital : " << hospital << endl;
	cout << endl;
}

string Doctor::getSpecizalization()
{
	return spazlaization;  //getter part
}

void  Doctor::setHospital()
{
	cout << "input new hospital of doctor " << doctorId << ":";
	cin >> hospital;
}