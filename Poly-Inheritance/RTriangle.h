//CSC 330
//Sean Connor
//Lab 2
#include"Shape.h"
//Preprocessor Command
#ifndef RTRIANGLE_H
#define RTRIANGLE_H
//class RTriangle inheritance
class RTriangle : public Shape {
	double hypotenuse, side1, side2;
public:
	RTriangle();
	RTriangle(double h, double s, double s2, double a);
	void setSides(double s, double s2);
	void setHypotenuse(double h);
	double getHypotenuse() const;
	double getSide1() const;
	double getSide2() const;
	double calculate_area();
};

#endif