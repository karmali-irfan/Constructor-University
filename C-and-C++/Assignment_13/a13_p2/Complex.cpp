//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a13_p2

#include <iostream>
#include "Complex.h"
using namespace std; 
#include <cstdlib>

//Empty Destructor function
Complex :: ~Complex(){
}
//Copy constructor
Complex ::Complex(const Complex &Complex){
    imaginary = Complex.imaginary; 
    real = Complex.real;
}
//Setting Complex
void Complex:: set_Complex(){
    imaginary = 0; real = 0; 
}
//Setting Complex
void Complex:: set_Complex(float i, float j){
    real = i; 
    imaginary = j; 
}
//Getting Conjugate values 
Complex Complex:: get_Conjugate(){
    Complex C; 
    C.imaginary = imaginary * -1; 
    C.real = real;
    return C;
}
//Getter for the imaginary number
float Complex:: get_Imaginary(Complex C){
    cout << C.imaginary << endl; 
    return C.imaginary;
}
//Getter for the real number
float Complex:: get_Real(Complex C){
    cout << C.real << endl; 
    return C.imaginary;
}
//Overloaded Operator function for adding complex numbers
Complex operator +(Complex &a, Complex &b){
    Complex result; 
    result.imaginary = a.imaginary + b.imaginary;
    result.real = a.real + b.real;
    return result;
}
//Overloaded Operator function for substaracting complex numbers
Complex operator - (Complex &a, Complex &b){
    Complex result; 
    result.imaginary = a.imaginary - b.imaginary;
    result.real = a.real - b.real;
    return result;
}
//Overloaded Operator function for multiplying complex numbers
Complex operator * (Complex &a, Complex &b){
    Complex result; 
    result.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    result.imaginary = (a.real * b.imaginary) + (b.real * a.imaginary)  ;
    return result;
}
//Overloaded operator function for input 
istream &operator >> (istream &input, Complex &first){
    cout << "Enter real part of number: " ; 
    input >> first.real ;
    cout << "Enter imaginary part of number: "; 
    input >> first.imaginary; 
    return input;
}
//Overloaded operator function for output 
ostream &operator << (ostream &output, Complex &first){
    if (first.imaginary < 0){
        output << first.real << "-" <<first.imaginary * -1 << "i" ;
    }
    else if (first.imaginary > 0){ 
        output << first.real << "+" << first.imaginary << "i" ;
    }
    else if (first.imaginary == 0){
        output << first.real;
    }
    //cout << endl;
    return output;
}
//Overloaded operator function for assigning values 
Complex &Complex:: operator = (const Complex &first){
    real = first.real; 
    imaginary = first.imaginary;
    return *this;
}