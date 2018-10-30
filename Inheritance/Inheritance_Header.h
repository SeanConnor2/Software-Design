//CSC 330 Hw1
//Sean Connor

//Preprocessor Command
#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <string>
using namespace std;

//Class Point2D
class Point2D{
	int x, y;
public:
	Point2D() : x(0), y(0){ }
	Point2D(int xx, int yy) : x(xx), y(yy){ }
	int getX() const;
	int getY() const;
	bool equal(Point2D p1);
	void setX(int xx);
	void setY(int yy);
	void print() const;
};
//Class Circle
class Circle : public Point2D {
	double radius;
public:
	Circle();
	Circle(double r, int x, int y);
	bool equal(Circle c1);
	double area() const;
	double getRadius() const;
	void setRadius(double r);
	void print() const;
	double distance();
	double distance(Circle& rhs);
	
};
//Class Cylinder
class Cylinder : public Circle {
	double height;
public:
	Cylinder();
	Cylinder(double h, double r, int x, int y);
	bool equal(Cylinder cyl);
	double getHeight() const;
	double volume() const;
	double area() const;
	void setHeight(double h);
	void print() const;
};
#endif
