// Rectangle.cpp
//CSC 330
//Sean Connor
//HW_2
// Contains definitions of Rectangle's methods.
#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(double width, double height, double positionX, double PositionY) : Shape(positionX, PositionY){
	// Use the "this->" notation
	this->width = width;
	this->height = height;
}
double Rectangle::area(){
	return width * height;
}
double Rectangle::getWidth(){
	return width;
}
double Rectangle::getHeight(){
	return height;
}
void Rectangle::resize(double width, double height){
	this->width = width;
	this->height = height;
}
void Rectangle::print(){
	cout << "Width = " << width << ", Height = " << height;
}