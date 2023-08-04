//CH 230_A
//a12_p6
//Irfan Karmali 
//i.karmali@jaocbs-university.de

#ifndef _SQUARE_H
#define _SQUARE_H

#include "Area.h"

class Square: public Area{
    public:
        Square(const char *n, double a); 
        ~Square(); 
        double calcArea() const;
        double calcPerimeter() const;
    private:
        double side;
};
#endif