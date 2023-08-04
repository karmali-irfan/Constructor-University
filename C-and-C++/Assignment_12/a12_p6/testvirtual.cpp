//CH 230_A
//a12_p6
//Irfan Karmali 
//i.karmali@jaocbs-university.de

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "square.h"
 
//Area is the parent class
//Cirlce and rectangle are derived classes from Area 
//Ring is a derived class from Circle

const int num_obj = 7;
int main() {
	Area *list[num_obj]; //(1)Initialzing an array of pointer objects
	int index = 0;		//(2)Initializing the integer variable to zero
	double sum_area = 0.0; //(3) Initializing the double variable to zero
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2); //(4) Creating an object
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	Square brown_square("BROWN", 16);
	list[0] = &blue_ring;		//(5)Assigning memory addresses to pointers
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &brown_square;
	// (7)While loop for calculating total area and getting the color of each shape
	//the while loop will iterate through all objects
	while (index < num_obj) {		
		(list[index])->getColor();				
		double area = list[index++]->calcArea();
		//(8)Cummulatively adding the area of each shape/object
		sum_area += area;
	}
	cout << endl; 
	index = 0;
	while (index < num_obj) {				
		(list[index])->getColor();		
		double perimeter = list[index++]->calcPerimeter();
		//(8)Cummulatively adding the perimeter of each shape/object
		sum_perimeter += perimeter;
	}
	cout << endl;
	//(9) Cout to print the sum of the areas of all objects
	cout << "\nThe total area is "
			<< sum_area << " units " ;	
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl <<endl;	
	return 0;
}
