#include <iostream>
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

float calCirArea(Circle x)
{
    return (22 / 7) * x.radius * x.radius;
}

float calRecArea(Rectangle x)
{
    return x.length * x.width;
}

float calSqaArea(Square x)
{
    return x.length * x.length;
}



int main()
{
    Circle c1;
    c1.radius = 5;
    float pond = calCirArea(c1);

    Rectangle r1, r2;
    r1.length = 7;
    r1.width = 3;

    r1.length = 28;
    r2.width = 15;

    float builearea = calRecArea(r1);
    float grassarea = calRecArea(r1);


    Square s1;
    s1.length = 4;
    float sarea = calSqaArea(s1);

    float fullArea = grassarea - (pond + builearea + sarea);
    cout << "full area : " << grassarea;
}


