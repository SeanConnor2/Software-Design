
//CSC 330
//Sean Connor
//Lab 2

//Preprocessor Command
#include "Shape.h"
#ifndef SHAPE_IMP_H
#define SHAPE_IMP_H

//Shape Class Definitions
double Shape::getArea() const{
	return area;
}
void Shape::setArea(double a){
	area = a;
}
double Shape::calculate_area(){
	return area;
}
#endif