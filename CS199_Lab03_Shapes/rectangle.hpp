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
	//Rectangle();
	Rectangle(double, double);
	~Rectangle();
	double area();
	double perimeter();
};

#endif
