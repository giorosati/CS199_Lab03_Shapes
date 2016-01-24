/*********************************************************************
** Program Filename: circle.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Circle class header file CS199_400 Lab03 project
*********************************************************************/


#ifndef CIRCLE_HPP
#define CIRCLE_HPP

//includes
#include "shape.hpp"

class Circle : public Shape
{
private:
	double radius;

public:
	//Circle();
	Circle(double);
	~Circle();
	double area();
	double perimeter();
};

#endif
