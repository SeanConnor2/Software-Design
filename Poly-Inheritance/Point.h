//CSC 330
//Sean Connor
//Lab 2

//Preprocessor Command
#ifndef POINT_H
#define POINT_H
using namespace std;
//Class Point
class Point{
	int x, y;
public:
	Point() : x(0), y(0){ }
	Point(int xx, int yy) : x(xx), y(yy){ }
	int getX() const;
	int getY() const;
	void setX(int xx);
	void setY(int yy);
	double calculate_area();
};
#endif