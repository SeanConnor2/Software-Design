// Shape.cpp

//CSC 330
//Sean Connor
//HW_2

// Contains the definitions of Shape's methods.
#include "Shape.h"
#include<iostream>
using namespace std;
Shape::Shape(double positionX, double positionY){
	// Use the "this->" notation 
	this->positionX = positionX;
	this->positionY = positionY;
}
double Shape::getPositionX(){
	return positionX;
}
double Shape::getPositionY(){
	return positionY;
}
void Shape::move(double positionX, double positionY){
// Use the "this->" notation
	this->positionX = positionX;
	this->positionY = positionY;
}double Shape::getWidth(){
	return 0;
}
double Shape::getHeight(){
	return 0;
}
void Shape::resize(double, double){
}