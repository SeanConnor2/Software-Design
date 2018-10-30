//CSC 330
//Sean Connor
//Lab 2

//Preprocessor Command
#include"Point.h"
#ifndef POINT_IMP_H
#define POINT_IMP_H
//Point Class Definitions
//Set and get Functions
int Point::getX() const{
	return x;
}
int Point::getY() const {
	return y;
}
void Point::setX(int xx){
	x = xx;
}
void Point::setY(int yy){
	y = yy;
}
//area of point
double Point::calculate_area(){
	return 0;
}
#endif
