#include<iostream>
#include<ctime>
using namespace std;

class Shape {
	double area;
public:
	Shape() { area = 0; }
	virtual void draw();
};
class Rectangle : public Shape {
	int len;
	int wid;
public:
	Rectangle() : len(0), wid(0) { }
	virtual void draw();
};
class Circle : public Shape {
	double radius;
public:
	Circle() : radius(0){ }
	virtual void draw();
};
void Circle::draw(){
	cout << "Drawing Rctangle" << endl;
}
void Rectangle::draw() {
	cout << "Drawing Rctangle" << endl;
}
void Shape::draw() {
	cout << "Drawing Rctangle" << endl;
}

int main(){
	srand(time(0));
	Circle c1;
	Rectangle r1;
	Shape s;
	Shape* ptr[10];
	unsigned which, i;
	for (i = 0; i < 10; i++) {
		which = 1 + rand() % 3;
		switch (which) {
		case 1: ptr[i] = new Shape;
		case 2: ptr[i] = new Rectangle; break;
		case 3: ptr[i] = new Circle; break;
		}
	}
		for (i = 0; i < 10; i++) {
			ptr[i]->draw();
			delete ptr[i];
		}
		c1.draw();
		r1.draw();
		return 0;
}
