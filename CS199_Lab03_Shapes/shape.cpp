/*********************************************************************
** Program Filename: shape.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Shape class implementation file CS199_400 Lab03 project
*********************************************************************/

//includes
#include <iostream>
#include "shape.hpp"

//usings
using std::cout;
using std::endl;

//default constructor
Shape::Shape()
{
	numSides = -1;
}

//normal case constructor
Shape::Shape(int sidesIn = -1)
{
	numSides = sidesIn;
}

//deconstructor
Shape::~Shape()
{
	cout << "Shape deconstructor has run." << endl;
}


//function that will be typically overrided by childs function
double Shape::area()
{
	return -1;
}

//function that will be typically overrided by childs function
double Shape::perimeter()
{
	return - 1;
}

//function that returns the number of sides
int Shape::getSides()
{
	return numSides;
}

