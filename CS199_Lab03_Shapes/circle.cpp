/*********************************************************************
** Program Filename: circle.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Circle class implementation file CS199_400 Lab03 project
*********************************************************************/

//includes
#include <iostream>
#include "circle.hpp"

//usings
using std::cout;

//default constructor
Circle::Circle() : Shape(0)
{
	radius = -1;
}

//normal case constructor
Circle::Circle(double radiusIn = -1) : Shape(0)
{
	radius = radiusIn;
}

//deconstructor
Circle::~Circle()
{
	cout << "Circle deconstructor has run.";
}

//returns area
double Circle::area()
{
	if (radius == -1) return 0;
	else
	{
		return 3.14 * (radius * radius);
	}
}

//returns perimeter
double Circle::perimeter()
{
	if (radius == -1) return 0;
	else
	{
		return 2 * 3.14 * radius;
	}
}

