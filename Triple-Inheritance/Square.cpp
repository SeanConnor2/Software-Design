// Square.cpp
//CSC 330
//Sean Connor
//HW_2
// Contains definitions of Rectangle's methods.
#include "Square.h"
#include<iostream>
using namespace std;
Square::Square(double side, double positionX, double positionY) : Shape(positionX, positionY){
	// Use the "this->" notation
	this->side = side;
}
double Square::area()
{
	return side*side;
}
double Square::getSide(){
	return side;
}
void Square::resize(double size){
	this->side = side;
}
void Square::print(){
	cout << "Side = " << side;
}
