//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p8

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
//Adding Complex numbers
Complex Complex:: add(Complex C){
    Complex c3;
    c3.real = real + C.real; 
    c3.imaginary = imaginary + C.imaginary ;
    return c3;
}
//Substracring Complex Numbers
Complex Complex:: substract(Complex C){
    Complex c3;
    c3.real = C.real - real; 
    c3.imaginary = C.imaginary - imaginary ;
    return c3;
}
//Multiplying Complex numbers
Complex Complex:: multiply(Complex C){
    Complex c3; 
    c3.real = (real * C.real) - (imaginary * C.imaginary); 
    c3.imaginary = (real * C.imaginary) + (C.real * imaginary); 
    return c3; 
} 
//Getting Conjugate values 
Complex Complex:: get_Conjugate(){
    Complex C; 
    C.imaginary = imaginary * -1; 
    C.real = real;
    return C;
}
//Printing Complex numbers
void Complex:: print_complex(){
    cout << real; 
    if (imaginary < 0 ){
        cout << " - "; 
        cout << imaginary * -1; 
        cout << "i"; 
    } 
    else if (imaginary > 0){
        cout << " + "; 
        cout << imaginary;
        cout << "i"; 
    } 
    cout << endl;
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