//CH 230_A
//a12_p6
//Irfan Karmali 
//i.karmali@jaocbs-university.de

#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}
//Function for calculating perimeter
double Circle:: calcPerimeter() const{
	std:: cout << "CalcPermiter of a circle...";
	return (2 * M_PI * radius); 
}
