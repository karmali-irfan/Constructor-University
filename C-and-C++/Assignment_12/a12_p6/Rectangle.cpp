//CH 230_A
//a12_p6
//Irfan Karmali 
//i.karmali@jaocbs-university.de

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}
//Function for calculating perimeter
double Rectangle:: calcPerimeter() const{
    std::cout << "calcPerimeter of Rectangle...";
	return ((2 * length) + (2 * width));
}
