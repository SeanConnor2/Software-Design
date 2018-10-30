//CSC 330
//Sean Connor
//Lab 2
#include"Shape.h"
#include"Point.h"

//Preprocessor Command
#ifndef Circle_H
#define Circle_H
//Circle Class Definitions

class  Circle : public Shape {
	Point center; // (x,y) embeted private object
	double radius;
public:
	Circle();
	Circle(double r, int xx, int yy, double a);
	int getX() const { return center.getX(); }
	int getY() const { return center.getY(); }
	double getRadius() const;
	void setRadius(double r);
	double calculate_area();

};
#endif