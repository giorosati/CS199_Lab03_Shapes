/*********************************************************************
** Program Filename: shape.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Shape class header file CS199_400 Lab03 project
*********************************************************************/


#ifndef SHAPE_HPP
#define SHAPE_HPP

//includes


class Shape
{
protected:
	int numSides;

public:
	Shape();				//default constructor
	Shape(int);				//constructor with parameter
	~Shape();				//deconstructor
	double area();			//to be overridden by child classes
	double perimeter();		//to be overridden by child classes
	int getSides();			//returns the number of sides
};

#endif