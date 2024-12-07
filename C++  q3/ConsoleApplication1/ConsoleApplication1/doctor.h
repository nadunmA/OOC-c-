#include <iostream>
using namespace std;

class Doctor {
private:
	int doctorId;
	string doctorName;
	string spazlaization;
	string hospital;

public:
	void setDoctorDetail(int dId, string dName, string dSeoc, string dHospital);
	void displayDoctorDetail();
	string getSpecizalization();
	void setHospital();
};