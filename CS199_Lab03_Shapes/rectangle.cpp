/*********************************************************************
** Program Filename: rectangle.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Rectangle class implementation file CS199_400 Lab03 project
*********************************************************************/

//includes
#include <iostream>
#include "rectangle.hpp"

//usings
using std::cout;

//default constructor
Rectangle::Rectangle() : Shape(4)
{
	side1 = -1;
	side2 = -1;
}

//normal case constructor w/default values
Rectangle::Rectangle(double side1In = -1, double side2In =-1) : Shape(4)
{
	side1 = side1In;
	side2 = side2In;
}

//deconstructor
Rectangle::~Rectangle()
{
	cout << "Rectangle deconstructor has run.";
}

//calculates and returns area
double Rectangle::area()
{
	if (side1 == -1 || side2 == -1) return 0;
	else
	{
		return side1 * side2;
	}
}

//calculates and returns perimeter
double Rectangle::perimeter()
{
	if (side1 == -1 || side2 == -1) return 0;
	else
	{
		return (2 * side1) + (2 * side2);
	}
}

//getters for testing
int Rectangle::getSide1()
{
	return side1;
}

int Rectangle::getSide2()
{
	return side2;
}