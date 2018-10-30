//CSC 330
//Sean Connor
//Lab 2

//Preprocessor Command
#ifndef SHAPE_H
#define SHAPE_H
//shape class
class Shape{
	double area;
public:
	Shape() : area(0){}
	Shape(double a) : area(a) {}
	double getArea() const;
	void setArea(double a);
	double calculate_area();
};
#endif