#include <iostream>
using namespace std;

class course {
private:
	int courseId;
	string courseName;
	float creditPoint;

public:
	void setCourseDetails(int cId, string cName);
	void displayCourseDetails();
	void setCreditPoint(float cPoint);
};

void course::setCourseDetails(int cId, string cName)
{
	courseId = cId;
	courseName = cName;
}

void course::setCreditPoint(float cPoint)
{
	creditPoint = cPoint;

	cout << "Input new " << courseName << " credit point : ";
	cin >> creditPoint;

}

void course::displayCourseDetails()
{
	cout << "courseId = " << courseId << endl;
	cout << "courseName = " << courseName << endl;
	cout << "creditPoints = " << creditPoint << endl;
	cout << endl;
}





int main()
{
	course c1, c2, c3, c4;

	c1.setCourseDetails(1050, "OOC");
	c2.setCourseDetails(1060, "SPM");
	c3.setCourseDetails(1100, "IWT");
	c4.setCourseDetails(1090, "ISDM");
	
	c1.setCreditPoint(2);
	c2.setCreditPoint(3);
	c3.setCreditPoint(4);
	c4.setCreditPoint(4);
	
	cout << endl;

	c1.displayCourseDetails();
	c2.displayCourseDetails();
	c3.displayCourseDetails();
	c4.displayCourseDetails();
	
	



	
	return 0;

}

