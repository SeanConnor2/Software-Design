#include"Inheritance_Header.h"
#include<iostream>
#include<cmath>
using namespace std;
//Pi definition for area
const double Pi = 3.14159;
//Point Class Definitions
//Set and get Functions
int Point2D::getX() const{
	return x;
}
int Point2D::getY() const {
	return y;
}
void Point2D::setX(int xx){
	x = xx;
}
void Point2D::setY(int yy){
	y = yy;
}
//Equal function
bool Point2D::equal(Point2D p1){
	return (x == p1.x && y == p1.y);
}
//Print Functions
void Point2D::print() const{
	cout << '[' << x << ',' << y << ']';
}

//Circle Class Definitions

Circle::Circle(){
	radius = 0.0;
}
Circle::Circle(double r, int x, int y): Point2D(x, y){
	radius = r;
}
//set Radius
void Circle::setRadius(double r) {
	radius = (r >= 0 ? r : 0);
}
//Get Radius
double Circle::getRadius() const { 
	return radius; 
}
//Area Function
double Circle::area() const {
	return (Pi * radius * radius);
}
//Equal Function
bool Circle::equal(Circle c1){
	return (radius == c1.radius);
}
//Print Function
void Circle::print() const{
	cout << "Center = ";
	Point2D::print();
	cout << " Radius = " << radius;
}
//distance function
double Circle::distance(Circle& rhs){
	return sqrt((pow((rhs.getX() - getX()), 2) + pow((rhs.getY() - getY()), 2)));
}
//distance function
double Circle::distance(){
	return sqrt(pow(getX(), 2) + pow(getY(), 2));
}

//Cylinder Class Definitions

Cylinder::Cylinder(){
	height = 0.0;
}
Cylinder::Cylinder(double h, double r, int x, int y): Circle(r, x, y){
	setHeight(h);
}
//get height function
double Cylinder::getHeight() const{
	return height;
}
//volume function
double Cylinder::volume() const{
	return Circle::area() * height;
}
//area function
double Cylinder::area() const{
	return 2 * Circle::area() + 2 * Pi * getRadius() * height;
}
//set height function 
void Cylinder::setHeight(double h){
	height = (h >= 0 ? h : 0);
}
//equal function 
bool Cylinder::equal(Cylinder cyl){
	return (Circle::equal(cyl) && height == cyl.height);
}
void Cylinder::print() const{
	Circle::print();
	cout << " Height = " << height << endl;
}


