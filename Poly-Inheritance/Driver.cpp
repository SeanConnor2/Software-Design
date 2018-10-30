//CSC 330 Lab2
//Sean Connor


#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"RTriangle.h"
#include"Point.h"

using namespace std;

//Two non-member functions
double distancec(Circle c1, Circle c2);
double distanceo(Circle c1);

int main(){
	//creating four objects 
	Circle c1(1, 2, 3, 4), c2(1,1,3,4);
	RTriangle t1(5,4,3,5), t2;
	cout << "Circle 1 Center = " << '(' << c1.getX() << ',' << c1.getY() << ')' << endl;
	cout << "Circle 2 Center = " << '(' << c2.getX() << ',' << c2.getY() << ')' << endl;
	cout << "Area of Circle 1 = " << c1.calculate_area() << endl;
	cout << "Area of Circle 2 = " << c2.calculate_area() << endl;
	cout << "Distance From Origin (Circle 1) = " << distanceo(c1) << endl;
	cout << "Distance Between Circle 1 & Circle 2 = " << distancec(c1, c2) << endl; 
	cout << "RTriangle 1 Hypotenuse = " << t1.getHypotenuse() << " , Side 1 = " << t1.getSide1() << " , Side 2 = " << t1.getSide2() << endl;
	cout << "RTriangle 2 Hypotenuse = " << t2.getHypotenuse() << " , Side 1 = " << t2.getSide1() << " , Side 2 = " << t2.getSide2() << endl;
	cout << "Area of RTriangle 1 = " << t1.calculate_area() << endl;
	cout << "Area of RTriangle 2 = " << t2.calculate_area() << endl;
	return 0;
}
//distance from one circle to another
double distancec(Circle c1, Circle c2) {
	//double p1, p2;
	//p1 = pow((c1.getX() - c1.getX()), 2);
	//p2 = pow((c2.getY() - c2.getY()), 2);
	//return sqrt(p1 + p2);
	return sqrt((pow((c2.getX() - c1.getX()), 2) + pow((c2.getY() - c2.getY()), 2)));
}
//distance to origin function
double distanceo(Circle c1) {
	return sqrt((pow((0 - c1.getX()), 2) + pow(0 - c1.getY(), 2)));
}
