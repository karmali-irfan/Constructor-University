//CH 230-A
//a11_p5.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
#include "Shapes.h"

int main(){

    Circle c("Circle", 3, 4, 7);
    Rectangle r("Rectangle", 0, 0, 2, 3); 
    Square s("Square", 0, 0, 8); 
    

    r.printName();
    c.printName();
    s.printName(); 

    cout << r.area() << endl;
    cout << r.perimeter() << endl; 
    cout << s.area() << endl;
    cout << s.perimeter() << endl; 

    return 0; 
}