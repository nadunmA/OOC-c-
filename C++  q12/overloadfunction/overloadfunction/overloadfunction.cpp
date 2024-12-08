#include <iostream>
using namespace std;

/*class employee {   this is function overloading
public:
    void print();
    void print(string name);
    void print(string name, int empNo);
};

void employee::print()
{
    cout << "hello" << endl;
}
void employee::print(string name)
{
    cout << "hello <<" << name << endl;
}
void employee::print(string name, int empNo)
{
    cout << "hello" << name << endl;
    cout << empNo;
}

int main()
{
    employee e1;

   /*e1.print();

    e1.print("nadun", 2); */








    /* this is constructor */


class Employee {
private:
    int empNo;
    string name;
    string location;

public:
    Employee();   //this is default constructor
    Employee(int pempNo, string plocation);   // this is overload constructor
    ~Employee();   //this is destructor using a allocate una dyanamic memory eka delete kirimata use WEE
};

Employee::Employee() // constructor part
{
    name = "nadun";
    cout << name << endl;
}

Employee::Employee(int pempNo, string plocation) // overload constructor part
{
    empNo = pempNo;
    location = plocation;

    cout << empNo << endl << location;
}

Employee::~Employee()
{
    cout << "delete" << endl;
}


int main()
{
    Employee e1; //default construction
    
    Employee e2(100, "Colombo"); // overload constructor 
} 


