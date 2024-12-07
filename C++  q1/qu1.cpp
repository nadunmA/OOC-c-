#include <iostream>
#include<iomanip>
using namespace std;
void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2); 
 
struct Marks {
	
	int mark1;
	int mark2;
	float CA1;
	float CA2;
};

int main() 
{

	Marks student[5];
	
	for(int i=0; i<5; i++)
	{
		cout << "Student " << i+1 << endl;
		cout << "enter mark 1 : ";
		cin >> student[i].mark1;
		cout << "enter mark 2 : ";
		cin >> student[i].mark2;
	}
	
	cout << "Student" << "\t\t" << "Mark1" << "\t\t" << "Mark2" << "\t\t" << "CA1" << "\t\t" << "CA2" << endl << endl;
	
	for(int i=0; i<5; i++)
	{
		cout << i+1 << "\t\t";
		findMarks(student[i].mark1, student[i].mark2, student[i].CA1, student[i].CA2);
	}
	
}


void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2)
{
	t_CA1 = t_marks1 * 0.2;
	t_CA2 = t_marks2 * 0.3;
	
	cout << t_marks1 << "\t\t" << t_marks2 << "\t\t" <<setiosflags(ios::fixed) << setprecision(2) << t_CA1 << "\t\t" << t_CA2 << endl;
}


