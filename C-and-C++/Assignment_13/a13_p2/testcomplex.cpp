//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a13_p2

#include <iostream>
#include "Complex.h"
#include <cstdlib>
#include <fstream> 
#include <cstring>
#include <string>
using namespace std; 

int main (){
    Complex c1, c2, sum, minus, product;
    float real = 0, imaginary = 0; 
    ifstream in1("in1.txt"), in2("in2.txt");
    if(!in1.is_open()){
        cerr << "Error accessing file" << endl;
        exit(1);
    }
    if(!in2.is_open()){
        cerr << "Error accessing file" << endl;
        exit(2);
    }

    in1 >> real >> imaginary ;
    c1.set_Complex(real, imaginary); 

    in2 >> real >> imaginary ;
    c2.set_Complex(real, imaginary); 
    
    ofstream out("output.txt"); 
    if(!out.good()){
        cerr << "Error opening file" << endl;
        exit(3);
    }
    sum = c1 + c2; 
    minus = c1 - c2; 
    product = c1 * c2;
    //printing onto file
    out << sum << "\n" << minus << "\n" <<  product; 
    //output onto terminal
    cout << sum << endl << minus << endl << product << endl;

    //closing files 
    in1.close(); 
    in2.close(); 
    out.close();

    return 0; 
}