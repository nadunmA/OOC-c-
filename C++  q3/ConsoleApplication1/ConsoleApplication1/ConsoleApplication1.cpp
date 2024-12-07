#include <iostream>
#include "doctor.h"
using namespace std;





int main()
{
    Doctor d1, d2, d3;

    d1.setDoctorDetail(1, "Dr Sunil", "nuralink", "AsiriHos");
    d2.setDoctorDetail(1, "Dr Yasantha", "astro", "AlokaHos");
    d3.setDoctorDetail(1, "Dr Godaya", "spacex", "GomezHos");

    d1.setHospital();
    d2.setHospital();
    d3.setHospital();

    cout << endl;

    d1.displayDoctorDetail();
    d2.displayDoctorDetail();
    d3.displayDoctorDetail();


    return 0;
}


