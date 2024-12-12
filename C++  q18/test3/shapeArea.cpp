#include <iostream>
#include"shapeArea.h"

float calCircArea(float radius)
{
	return (22 / 7.0) * radius * radius;
}

float calRecArea(float length, float width)
{
	return length * width;
}

float calSquareArea(float length)
{
	return length * length;
}

void calPeri(float length, float width, float &perimeter)
{
	perimeter = (length + width) * 2;
}

float calCost(float perimeter, float cost)
{
	return perimeter * cost;
}