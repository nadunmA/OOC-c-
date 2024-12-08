#include <iostream>
using namespace std;

class patient {
private:
	int appoinmentId;
	string patientName;
	double doctorCharge;
	double hospitalCharge;

public:
	void setPatientDetails(int paId, string pName);
	void displayPatientDetails();
	void setDoctorCharge(double pdCharge);
	void setHospitalCharge(double phCharge);
	int calculateTotalPayment();
};