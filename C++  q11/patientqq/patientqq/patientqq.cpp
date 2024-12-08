#include <iostream>
using namespace std;

class Patient {
private:
    int appoinmentId;
    string patientName;
    int doctorCharge;
    int hospitalCharge;

public:
    void setPatientDetails(int aId, string pName);
    void displayPatientDetails();
    void setDoctorCharge(int dCharge);
    void sethospitalCharge(int hCharge);
    double calTotalPayment();

};


void Patient::setPatientDetails(int aId, string pName)
{
    appoinmentId = aId;
    patientName = pName;
}

void Patient::displayPatientDetails()
{
    cout << "pId = " << appoinmentId << endl;
    cout << "pName = " << patientName << endl;
}

void Patient::setDoctorCharge(int dCharge)
{
    doctorCharge = dCharge;
}

void Patient::sethospitalCharge(int hCharge)
{
    hospitalCharge = hCharge;
}


double Patient::calTotalPayment()
{
    return doctorCharge + hospitalCharge;
}


int main()
{
    Patient p1, p2;

    p1.setPatientDetails(1001, "nimal");
    p2.setPatientDetails(1002, "sunil");
    
    p1.setDoctorCharge(1500);
    p2.setDoctorCharge(1700);

    p1.sethospitalCharge(500);
    p2.sethospitalCharge(500);

    p1.displayPatientDetails();
    cout << "total pay" << p1.calTotalPayment() << endl;

    p2.displayPatientDetails();
    cout << "total pay" << p2.calTotalPayment() << endl;
}


