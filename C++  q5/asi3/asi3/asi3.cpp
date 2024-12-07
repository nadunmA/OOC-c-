#include <iostream>
using namespace std;

class Event {
private:
    int eventId;
    string eventType;
    string themeColor;
    string location;

public:
    void seteventDetails(int eId, string eType, string tColor);
    void displayeventDetials();
    void seteventLocation(string tColor);

};

void Event::seteventDetails(int eId, string eType, string tColor)
{
    eventId = eId;
    eventType = eType;
    themeColor = tColor;
}

void Event::displayeventDetials()
{
    cout << "eventTypeParty = " << eventType << endl;
    cout << "themeColor = " << themeColor << endl;
    cout << "location = " << location << endl;
    cout << endl;
}

void Event::seteventLocation(string elocation)
{
    location = elocation;

    cout << "input new location of event " << eventId << " : ";
    cin >> location;
}



int main()
{
    Event* E1 = new Event();
    Event* E2 = new Event();
    Event* E3 = new Event();
  

    E1->seteventDetails(1, "party", "red");
    E2->seteventDetails(2, "wedding", "purple");
    E3->seteventDetails(3, "party", "pink");
  

    E1->seteventLocation("Nugegoda");
    E2->seteventLocation("Maharagama");
    E3->seteventLocation("Malabe");

    cout << endl;

    E1->displayeventDetials();
    E2->displayeventDetials();
    E3->displayeventDetials();


    delete E1, E2, E3;



    return 0;
}


