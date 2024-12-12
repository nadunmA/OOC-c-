#include <iostream>
#include"shapeArea.h"
using namespace std;

struct Circle {

    float radius;
};

struct Rectangle {

    float length;
    float width;
};

struct Square {

    float length;
};


int main()
{
    Circle c1;
    Rectangle r1, r2;
    Square s1;

    c1.radius = 5;

    r1.length = 7;
    r1.width = 3;

    r2.length = 28;
    r2.width = 15;

    s1.length = 4;

    float cArea = calCircArea(c1.radius);
    float areaR1 = calRecArea(r1.length, r1.width);
    float areaR2 = calRecArea(r2.length, r2.width);
    float areaS = calSquareArea(s1.length);

    float fullArea = (cArea + areaR1 + areaS) - areaR2;

    cout << "area is a : " << fullArea << endl;

    float perimeter;

    calPeri(r2.length, r2.width, perimeter);

    float cost = 10;

    cout << "Cost is : " << calCost(perimeter, cost) << endl;
}

