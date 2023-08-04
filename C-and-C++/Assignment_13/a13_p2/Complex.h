//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a13_p2

#include <iostream>
using namespace std; 
#include <cstdlib>

class Complex{
    private: //private members of the class
        float real; 
        float imaginary; 
    public: //public members of the class
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
        friend Complex operator +(Complex &, Complex &);
        friend Complex operator - (Complex &, Complex &); 
        friend Complex operator * (Complex &, Complex &);   
        friend istream &operator >> (istream &, Complex &);
        friend ostream &operator << (ostream &, Complex &);
        Complex &operator = (const Complex &);

}; 