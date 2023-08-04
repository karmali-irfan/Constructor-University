w//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p8

#include <iostream>
#include "Complex.h"
#include <cstdlib>

using namespace std; 

int main (){
    Complex c1, c2, c3;
    
    c1.set_Complex(1,-7); 
    c3 = c1.get_Conjugate();
    c3.print_complex(); 
    c2.set_Complex(1,2); 
    c3 = c2.add(c1); 
    c3.print_complex(); 
    c3 = c2.substract(c1);
    c3.print_complex(); 
    c3 = c2.multiply(c1);
    c3.print_complex();


    return 0; 
}