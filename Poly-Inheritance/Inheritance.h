//CSC 330
//Sean Connor
//Lab 2


//Class 
class Shape{
	double area;
public:
	Shape();
	Shape(double a);
	double getArea() const;
	void setArea(double a);
	double calculate_area();
};

class  Circle : public Shape{
	Point center; // (x,y)
	double radius;
public:
	Circle();
	Circle(double r, int xx, int yy, double a);
	double getRadius() const;
	void setRadius(double r);
	double calculate_area();

};

class RTriangle : public Shape{
	double hypotenuse, side1, side2;
public:
	RTriangle();
	RTriangle(double h, double s, double s2, double a);
	void setSides(double s, double s2);
	void setHypotenuse(double h);
	double getHypotenuse() const;
	double getSide1() const;
	double getSide2() const;
	double calculate_area();
};

#endif