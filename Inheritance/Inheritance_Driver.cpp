#include"Inheritance_Header.h"
#include<iostream>
#include<cmath>

using namespace std;
//Two non-member functions
double distancec(Circle c1, Circle c2);
double distanceo(Circle c1);
int main(){
	//initalizing points, circles and cylinders

	Point2D p1(2,2), p2(1, 1);
	Circle c1(2, 1, 1), c2(5, 2, 2);
	Cylinder cyl, cyl2(4, 5, 1, 1);
	p1.print();
	cout << endl;
	c2.print();
	cout << endl;
	cyl.print();
	cout << "Area of Circle 2 = " << c2.area();
	cout << endl;
	cout << "Area of Cylinder 1 = " << cyl2.area();
	cout << endl;
	cout << "Distance From Center(Non-Member) = " << distanceo(c1) << endl;
	cout << "Distance From Circle to Circle(Non-Member) = " << distancec(c1, c2) << endl;
	cout << "Distance From a Circle to Another Circle(Member) = " << c1.distance(c2) << endl; 
	cout << "Distance From Circle to Center(Member) = " << c1.distance() << endl;
	cout << "Volume of Cylinder 1 = " << cyl2.volume() << endl;
	if (p1.equal(p2))
		cout << "Point 1 and Point 2 are equal" << endl;
	else
		cout << "Not Equal" << endl;
	if (c1.equal(c2))
		cout << "Circle 1 and Circle 2 are equal" << endl;
	else
		cout << "Not Equal" << endl;
	if (cyl.equal(cyl2))
		cout << "Cylinder 1 and Cylinder 2 are equal" << endl;
	else
		cout << "Not Equal" << endl;
	
	

//--------------------------------------------------------------------------------------------------------
	Point2D * ptrP3, *ptrP4; // Declare two Point pointers
	ptrP3 = new Point2D; // Dynamically allocate storage
	ptrP4 = new Point2D(4, 4);
	ptrP3->print(); // Point object(0,0)
	// prtPoint1->print() is the same as (*ptrP3).print()
	ptrP4->print(); // Point object(4,4)
	cout << endl;
	delete ptrP3; // Remove storage via delete
	delete ptrP4;
	// Object Reference (Alias)
	Point2D & p5 = p2; // Reference (alias) to an existing object
	p5.print(); // Point object(2,2)
	cout << endl;
//---------------------------------------------------------------------------------------------------------
	// Array of Objects - Static Memory Allocation

	Point2D ptsArray1[2]; // Array of 3 Point objects
	// Use default constructor for all elements of the array
	ptsArray1[0].print(); // Point object(0,0)
	cout << endl;
	ptsArray1[1].setX(11);
	ptsArray1[1].setY(11);
	(ptsArray1 + 1)->print(); // Point object(11,11)
	// same as ptsArray1[1].print()
	cout << endl;

	Point2D ptsArray2[3] = { Point2D(21, 21), Point2D(22, 22), Point2D() };
	// Initialize array elements via constructor
	ptsArray2[0].print(); // Point object(21,21)
	cout << endl;
	(ptsArray2 + 2)->print(); // Point object(0,0)
	// same as ptsArray2[2].print()
	cout << endl;

	// Array of Object Pointers - Need to allocate elements dynamically
	Point2D * ptrPtsArray3 = new Point2D[2];
	ptrPtsArray3[0].setX(31);
	ptrPtsArray3[0].setY(31);
	ptrPtsArray3->print(); // Point object(31,31)
	// same as ptrPtsArray3[0].print()
	cout << endl;
	(ptrPtsArray3 + 1)->setX(32); 
	(ptrPtsArray3 + 1)->setY(32);
	ptrPtsArray3[1].print(); // Point object(32,32)
	cout << endl;

//---------------------------------------------------------------------------------------------------------

	Circle cirArray1[2]; // Array of 3 Circle objects
	// Use default constructor for all elements of the array
	cirArray1[0].print(); // Cirlce object(0,0,0)
	cout << endl;
	cirArray1[1].setX(11);
	cirArray1[1].setY(11);
	cirArray1[1].setRadius(5);
	(cirArray1 + 1)->print(); // Circle object(5,11,11)
	// same as cirArray1[1].print()
	cout << endl;
	
	Circle cirArray2[3] = { Circle(5, 21, 21), Circle(6, 22, 22), Circle() };

	// Initialize array elements via constructor
	cirArray2[0].print(); // Circle object(5,21,21)
	cout << endl;
	(cirArray2 + 2)->print(); // Circle object(0,0,0)
	// same as cirArray2[2].print()
	cout << endl;

	// Array of Object Pointers - Need to allocate elements dynamically
	Circle * ptrCirArray3 = new Circle[2];
	ptrCirArray3[0].setX(31);
	ptrCirArray3[0].setY(31);
	ptrCirArray3[0].setRadius(6);
	ptrCirArray3->print(); // Circle object(6,31,31)
	// same as ptrCirArray3[0].print()
	cout << endl;
	(ptrCirArray3 + 1)->setX(32); 
	(ptrCirArray3 + 1)->setY(32);
	(ptrCirArray3 + 1)->setRadius(8);
	ptrCirArray3[1].print(); // Cirlce object(8,32,32)
	cout << endl;

//---------------------------------------------------------------------------------------------------------

	Cylinder cylArray1[2]; // Array of 3 Cylinder objects
	// Use default constructor for all elements of the array
	cylArray1[0].print(); // Cylinder object(0,0,0,0)
	cylArray1[1].setX(11);
	cylArray1[1].setY(11);
	cylArray1[1].setRadius(5);
	cylArray1[1].setHeight(10);
	(cylArray1 + 1)->print(); // Circle object(10,5,11,11)
	// same as cylArray1[1].print()
	

	Cylinder cylArray2[3] = { Cylinder(12, 5, 21, 21), Cylinder(10, 6, 22, 22), Cylinder() };

	// Initialize array elements via constructor
	cylArray2[0].print(); // Cylinder object(12,5,21,21)
	(cylArray2 + 2)->print(); // Circle object(0,0,0,0)
	// same as cylArray2[2].print()
	

	// Array of Object Pointers - Need to allocate elements dynamically
	Cylinder * ptrCylArray3 = new Cylinder[2];
	ptrCylArray3[0].setX(31);
	ptrCylArray3[0].setY(31);
	ptrCylArray3[0].setRadius(6);
	ptrCylArray3[0].setHeight(14);
	ptrCylArray3->print(); // Cylinder object(14,6,31,31)
	// same as ptrCylArray3[0].print()
	(ptrCylArray3 + 1)->setX(32);
	(ptrCylArray3 + 1)->setY(32);
	(ptrCylArray3 + 1)->setRadius(8);
	(ptrCylArray3 + 1)->setHeight(18);
	ptrCylArray3[1].print(); // Cirlce object(18,8,32,32)
	

	delete[] ptrPtsArray3; // Free storage
	delete[] ptrCirArray3; // Free storage
	delete[] ptrCylArray3; // Free storage
	return 0;
}

double distancec(Circle c1, Circle c2){
	double p1, p2;
	p1 = pow((c2.getX() - c1.getX()), 2);
	p2 = pow((c2.getY() - c2.getY()), 2);
	return sqrt(p1 + p2);
	//return sqrt((pow((c2.getX() - c1.getX()), 2) + pow((c2.getY() - c2.getY()), 2)));
}
//Function Works
double distanceo(Circle c1){
	return sqrt((pow((0 - c1.getX()), 2) + pow(0 - c1.getY(), 2)));
}
