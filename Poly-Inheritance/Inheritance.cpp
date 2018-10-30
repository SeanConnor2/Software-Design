
const double Pi = 3.14159;


//Circle Class Definitions

Circle::Circle(){
	radius = 0.0;
}
Circle::Circle(double r, int xx, int yy, double a) : Shape(a){
	radius = r;
	center.setX(xx);
	center.setY(yy);
}
//set Radius
void Circle::setRadius(double r) {
	radius = (r >= 0 ? r : 0);
}
//Get Radius
double Circle::getRadius() const {
	return radius;
}
double Circle::calculate_area(){
	return (Pi * (radius * radius));
}


//RTriangle Class Definitions

RTriangle::RTriangle(){
	hypotenuse = 0;
	side1 = 0;
	side2 = 0;
}

RTriangle::RTriangle(double h, double s, double s2, double a) : Shape(a){
	//if (sqrt(pow(s, 2) + pow(s2, 2)) == h){
		hypotenuse = h;
		side1 = s;
		side2 = s2;
	//}
}
double RTriangle::getSide1() const{
	return side1;
}
double RTriangle::getSide2() const{
	return side2;
}
double RTriangle::getHypotenuse() const {
	return hypotenuse;
}
void RTriangle::setHypotenuse(double h){
	hypotenuse = h;
}
void RTriangle::setSides(double s, double s2){
	side1 = s;
	side2 = s2;
}
double RTriangle::calculate_area(){
	return ((side1 * side2) / 2);
}