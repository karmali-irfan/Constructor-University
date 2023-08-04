//CH 230_A
//a12_p6
//Irfan Karmali 
//i.karmali@jaocbs-university.de

#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}
//Function for calculating perimeter
double Ring:: calcPerimeter() const{
	std:: cout << "CalcPermiter of a circle...";
	return (2 * M_PI * innerradius); 
}