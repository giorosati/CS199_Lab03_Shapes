/*********************************************************************
** Program Filename: rectangle.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Rectangle class header file CS199_400 Lab03 project
*********************************************************************/


#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

//includes
#include "shape.hpp"

class Rectangle : public Shape
{
private:
	double side1;
	double side2;

public:
	Rectangle();				//default constructor
	Rectangle(double, double);  //constructor with parameters
	~Rectangle();				//deconstructor
	double area();				//returns area
	double perimeter();			//returns perimeter
	int getSide1();				//returns side1 value
	int getSide2();				//returns side2 value
};

#endif
