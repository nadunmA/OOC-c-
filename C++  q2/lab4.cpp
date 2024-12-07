#include<iostream>
#include<iomanip>
using namespace std;

//struct part

struct Circle{
	
	float radius;
};

struct Rectangle{
	
	float length;
	float width;
};

struct Square{
	
	float length;
};


//functions part

float calCircleArea(Circle x)
{
	return (22/7.0) * x.radius * x.radius;
}

float calRectangleArea(Rectangle x)
{
	return x.length * x.width;
}

float calSquareArea(Square x)
{
	return x.length;
}

void calPerimeter(Rectangle x, float &perimeter)
{
	perimeter = (x.length * x.width) * 2;
}

float calCost(float perimeter, float cost)
{
	return perimeter * cost;
}


//main program

int main()
{
	Circle c1;
	
	c1.radius = 5;
	float pond = calCircleArea(c1);
	
	
	Rectangle r1, r2;
	
	r1.length = 7;
	r1.width = 3;
	float buildingRec = calRectangleArea(r1);
	
	r2.length = 28;
	r2.width = 15;
	float grassAera = calRectangleArea(r2);
	
	
	Square s1;
	
	s1.length = 4;
	float buildSquare = calSquareArea(s1);
	
	
	float grass = grassAera-(pond + buildingRec + buildSquare);
	
	cout << "Grass Area : " << setiosflags(ios::fixed) << setprecision(3) << grass << endl;
	
	
	float perimeter, cost = 10;
	
	calPerimeter(r2, perimeter);
	cout << "Cost is : " << setiosflags(ios::fixed) << setprecision(2) << calCost(perimeter, cost);
}
