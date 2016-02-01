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
	Circle();				//default constructor
	Circle(double);			//constructor with parameter
	~Circle();				//deconstructor
	double area();			//returns area
	double perimeter();		//returns perimeter
};

#endif
