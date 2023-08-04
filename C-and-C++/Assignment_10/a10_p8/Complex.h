//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p8

#include <iostream>
using namespace std; 
#include <cstdlib>

class Complex{
    private:
        float real; 
        float imaginary; 
    public: 
        void set_Complex();
        void set_Complex(float, float = 0);
        float get_Imaginary(Complex);
        float get_Real(Complex); 
        Complex(){};
        Complex add(Complex); 
        Complex substract(Complex); 
        Complex multiply(Complex); 
        void print_complex();
        Complex get_Conjugate();
        Complex(const Complex &); 
        ~Complex(); 
}; 