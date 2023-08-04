//CH 230_A
//a12_p6
//Irfan Karmali 
//i.karmali@jaocbs-university.de

#include <iostream>
#include "square.h"
using namespace std;

Square:: Square(const char *n, double a): Area(n){
    side = a;
}
Square:: ~Square(){
}
double Square:: calcArea() const{
    cout << "Calculating Area..." << endl; 
    return (side * side);
}
double Square:: calcPerimeter() const{
    cout << "Calculating Perimeter..." << endl; 
    return (4 * side);
}