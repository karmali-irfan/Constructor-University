//CH 230-A 
//Irfan Karmali
//i.karmali@jacobs-university.de
//a11_p1

#include <iostream>
#include "Box.h"
using namespace std;

//Default class
Box:: Box(){
    height = 0;
    width = 0; 
    length = 0;
}
//Initializing variables in the class 
Box:: Box (double h, double w, double l){
    height = h; 
    width = w; 
    length = l;
}
//Getter for Volume
double Box:: get_Volume(){
    return height * width * length ;
}
//Setter for Height
void Box:: set_Height(double h){
     height = h; 
}
//Setter for Width
void Box:: set_Width(double w){
    width = w;
} 
//Setter for Length
void Box:: set_Length(double l) {
    length = l;
}
//Copy constructor
Box:: Box(const Box &b){
    cout << "Calling Copy Constrcutor" << endl; 
    height = b.height;
    width = b.width;
    length = b.length;
}
//Destructor
Box:: ~Box(){
   
}
//Getter functions for height, widht and lenght
double Box:: get_Height(){
    return height;
}
double Box:: get_Width(){
    return width;
}
double Box:: get_Length(){
    return length;
}
