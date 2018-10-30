//Square.h
//CSC 330
//Sean Connor
//HW_2
// Contains the declaration (but not the definition!) of the Square class,
// which inherits from the Shape class.
#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
class Square : public Shape
{
public:
	Square(double side, double postitionX, double postitionY);
	// I've overridden the area() method here, just like I did in Circle.
	virtual double area();
	virtual double getSide();
	virtual void resize(double side);
	virtual void print();
	// override all virtual functions from Shape class
private:
	// ...and one new data members
	double side;
};
#endif // SQUARE_H