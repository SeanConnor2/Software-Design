// main.cpp
//CSC 330
//Sean Connor
//HW_2
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "RightTriangle.h"
using namespace std;
int main()
{
	// Declare an array of four Shape pointers.
	//add your code
	Shape* ptr[4];
	// Use the pointers to create objects of class Circle, Rectangle, Square and RightTriangle
	ptr[0] = new Circle(5, 0, 1);
	ptr[1] = new Rectangle(0, 0, 5, 4);
	ptr[2] = new RightTriangle(0, 0, 5, 3);
	ptr[3] = new Square(0, 0, 5);
	/* Use for loop to display the values stored in private data members of the
	above four objects */
	for (int i = 0; i < 4; i++){
		ptr[i]->print();
		cout << endl;
	}
	// Use for loop to display the area of the above four objects
	for (int i = 0; i < 4; i++){
		if (i == 0)
			cout << "Area of A Circle = " << ptr[i]->area() << endl;
		else if (i == 1)
			cout << "Area of A Rectangle = " << ptr[i]->area() << endl;
		else if (i == 2)
			cout << "Area of A RightTriangle = " << ptr[i]->area() << endl;
		else
			cout << "Area of A Square = " << ptr[i]->area() << endl;
	}
	// Use for loop to implement function resize and display the results of it.
	for (int i = 0; i < 4; i++){
		if (i == 0){
			ptr[i]->resize(5, 5);
			cout << "Resized Circle" << endl;
			ptr[i]->print();
			cout << endl;
		}
		else if (i == 1){
			ptr[i]->resize(5, 5);
			cout << "Resized Rectangle" << endl;
			ptr[i]->print();
			cout << endl;
		}
		else if (i == 2){
			ptr[i]->resize(5, 5);
			cout << "Resized RightTriangle" << endl;
			ptr[i]->print();
			cout << endl;
		}
		else{
			ptr[i]->resize(5, 5);
			cout << "Resized Square" << endl;
			ptr[i]->print();
			cout << endl;
		}
	}
	// Delete the objects that were created dynamically
		delete[] * ptr;
	return 0;
}