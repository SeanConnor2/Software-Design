// Circle.cpp
//CSC 330
//Sean Connor
//HW_2
// Contains the definitions of the methods of the Circle class.
#include "Circle.h"
#include<iostream>
using namespace std;
Circle::Circle(double radius, double positionX, double positionY) : Shape(positionX, positionY){
	// Use the "this->" notation
	this->radius = radius;
}
double Circle::area(){
	const double PI = 3.1415927;
	return PI * radius * radius;
}
double Circle::getRadius(){
	return radius;
}
void Circle::resize(double radius){
	this->radius = radius;
}
void Circle::print(){
	cout << "Center = ( " << this->getPositionX() << ", " << this->getPositionY() << " )" << endl;
	cout << "Radius = " << radius;
	
}
