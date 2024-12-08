#include <iostream>
#include "lab.h"
using namespace std;

int main()
{
    Lab L1, L2, L3;

    L1.setLabDetails(401, 60);
    L2.setLabDetails(402, 40);
    L3.setLabDetails(403, 30);
    
    int capa;

    cout << "insert capacity : ";
    cin >> capa;

    if (capa <= L3.getCapacity())
    {
        cout << "Lab 403";
    }
    else if(capa <= L2.getCapacity())
    {
        cout << "Lab 402";
    }
    else if (capa <= L1.getCapacity())
    {
        cout << "Lab 401";
    }

}


