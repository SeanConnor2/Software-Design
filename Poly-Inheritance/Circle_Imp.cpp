//CSC 330
//Sean Connor
//Lab 2
#include"Circle.h"
#include"Shape.h"
//Preprocessor Command
#ifndef Circle_IMP_H
#define Circle_IMP_H

const double Pi = 3.14159;

//Circle Class Definitions

Circle::Circle(){
	radius = 0.0;
}
Circle::Circle(double r, int xx, int yy, double a): Shape(a){
	radius = r;
	center.setX(xx);
	center.setY(yy);
}
//set Radius
void Circle::setRadius(double r) {
	radius = (r >= 0 ? r : 0);
}
//Get Radius
double Circle::getRadius() const {
	return radius;
}
double Circle::calculate_area(){
	return (Pi * (radius * radius));
}
#endif