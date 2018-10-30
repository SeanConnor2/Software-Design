// Circle.h
//CSC 330
//Sean Connor
//HW_2
// Contains the declaration (but not the definition!) of the Circle class.
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(double radius, double postitionX, double positionY);
	virtual double area();
	virtual double getRadius();
	virtual void resize(double radius);
	virtual void print();
	// override all virtual functions from Shape class
private:
	double radius;
};
#endif // CIRCLE_H
