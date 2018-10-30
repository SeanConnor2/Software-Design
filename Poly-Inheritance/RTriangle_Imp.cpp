//CSC 330
//Sean Connor
//Lab 2
#include"Shape.h"
#include"RTriangle.h"
#include<cmath>
//Preprocessor Command
#ifndef RTRIANGLE_IMP_H
#define RTRIANGLE_IMP_H
//RTriangle Class Definitions

RTriangle::RTriangle() {
	hypotenuse = 0;
	side1 = 0;
	side2 = 0;
}
//intializer constructor 
RTriangle::RTriangle(double h, double s, double s2, double a): Shape(a){
	if (sqrt((s*s) + (s2*s2)) == h) {
		hypotenuse = h;
		side1 = s;
		side2 = s2;
	}
	else {
		hypotenuse = sqrt((s*s) + (s2*s2));
		side1 = s;
		side2 = s2;
	}
	
}
//get and set functions for the sides and hypotenuse
double RTriangle::getSide1() const {
	return side1;
}
double RTriangle::getSide2() const {
	return side2;
}
double RTriangle::getHypotenuse() const {
	return hypotenuse;
}
void RTriangle::setHypotenuse(double h) {
	hypotenuse = h;
}
void RTriangle::setSides(double s, double s2) {
	side1 = s;
	side2 = s2;
}
//Area of a triangle
double RTriangle::calculate_area() {
	return ((side1 * side2) / 2);
}
#endif