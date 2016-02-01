/*********************************************************************
** Program Filename: Main.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-23
** Description: Main file CS199_400 Lab03 project - Winter 2016
*********************************************************************/

#include<iostream>
#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"


using std::endl;
using std::cout;


int main() {
	srand(1234);

	//Shape testShape1 = Shape(4);
	//cout << "testShape1 sides: " << testShape1.getSides() << endl;
	//std::cin.get();

	//Shape testShape2 = Shape();
	//cout << "testShape2 sides: " << testShape2.getSides() << endl;
	//std::cin.get();

	int x = 3;
	int y = 3;

	Rectangle r1 = Rectangle(x,y);

	cout << "r1 side1: " << r1.getSide1() << endl;
	cout << "r1 side2: " << r1.getSide2() << endl;
	cout << "r1 sides: " << r1.getSides() << endl;
	cout << "r1 perimeter: " << r1.perimeter() << endl;
	cout << "r1 area: " << r1.area() << endl;

	std::cin.get();



	//Circle *a[10];
	//for (int x = 0; x < 10; x++) {
	//	a[x] = new Circle(rand() % 100);
	//}
	//Rectangle *b[10];
	//for (int x = 0; x < 10; x++) {
	//	b[x] = new Rectangle(rand() % 100, rand() % 100);
	//}
	//for (int x = 0; x < 10; x++) {
	//	printf("Area: %f, Perimeter: %f, Number of Sides: %d\n", a[x]->area(), a[x]->perimeter(), a[x]->getSides());
	//	printf("Area: %f, Perimeter: %f, Number of Sides: %d\n", b[x]->area(), b[x]->perimeter(), b[x]->getSides());
	//}
	//cout << "printf has run." << endl;
	//std::cin.get();

	return 0;
}