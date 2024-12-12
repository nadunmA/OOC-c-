#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    int studentId;
    string studentName;
    int marksOOC;
    int marksSPM;
    int marksISDM;

public:
    void setStudentDetails(int sId, string sName, int mOOC, int mSPM, int mISDM);
    int getstudentId();
    int getMarksOOC();
    int getMarksSPM();
    int getMarksISDM();
    string getstudenName();
};

void Student::setStudentDetails(int sId, string sName, int mOOC, int mSPM, int mISDM)
{
    studentId = sId;
    studentName = sName;
    marksOOC = mOOC;
    marksSPM = mSPM;
    marksISDM = mISDM;

}

int Student::getstudentId()
{
    return studentId;
}

int Student::getMarksOOC()
{
    return marksOOC;
}

int Student::getMarksSPM()
{
    return marksSPM;
}

int Student::getMarksISDM()
{
    return marksISDM;
}

string Student::getstudenName()
{
    return studentName;
}



int main()
{
    Student s1, s2, s3;

    s1.setStudentDetails(1234, "Kyline", 75, 80, 60);
    s2.setStudentDetails(4321, "James", 65, 70, 85);
    s3.setStudentDetails(6543, "Kyson", 90, 85, 80);

    int s1OOC, s2SPM, s3ISDM;

    s1OOC = s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM();
    s2SPM = s2.getMarksOOC() + s2.getMarksSPM() + s2.getMarksISDM();
    s3ISDM = s3.getMarksOOC() + s3.getMarksSPM() + s3.getMarksISDM();

    cout << "studentID : " << s1.getstudentId() << endl;
    cout << "studentName : " << s1.getstudenName() << endl;
    cout << "marks OOC : " << s1.getMarksOOC() << endl;
    cout << "marks SPM : " << s1.getMarksSPM() << endl;
    cout << "marks ISDM : " << s1.getMarksISDM() << endl;
    cout << "Total marks : " << s1OOC << endl;
    cout << "Average Mark : " << setiosflags(ios::fixed) << setprecision(2) << s1OOC / 3.0 << endl << endl;

    cout << "studentID : " << s2.getstudentId() << endl;
    cout << "studentName : " << s2.getstudenName() << endl;
    cout << "marks OOC : " << s2.getMarksOOC() << endl;
    cout << "marks SPM : " << s2.getMarksSPM() << endl;
    cout << "marks ISDM : " << s2.getMarksISDM() << endl;
    cout << "Total marks : " << s2SPM << endl;
    cout << "Average Mark : " << setiosflags(ios::fixed) << setprecision(2) << s2SPM / 3.0 << endl << endl;

    cout << "studentID : " << s3.getstudentId() << endl;
    cout << "studentName : " << s3.getstudenName() << endl;
    cout << "marks OOC : " << s3.getMarksOOC() << endl;
    cout << "marks SPM : " << s3.getMarksSPM() << endl;
    cout << "marks ISDM : " << s3.getMarksISDM() << endl;
    cout << "Total marks : " << s3ISDM << endl;
    cout << "Average Mark : " << s3ISDM / 3 << endl << endl;


    return 0;
}


