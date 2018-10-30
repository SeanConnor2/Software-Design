// Rectangle.h
//CSC 330
//Sean Connor
//HW_2
// Contains the declaration (but not the definition!) of the Rectangle class,
// which inherits from the Shape class.
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(double width, double height, double positionX, double postitionY);
	// I've overridden the area() method here, just like I did in Circle.
	virtual double area();
	virtual double getWidth();
	virtual double getHeight();
	virtual void resize(double width, double height);
	virtual void print();
	// override all virtual functions from Shape class
private:
	// ...and two new data members
	double width;
	double height;
};
#endif // RECTANGLE_H