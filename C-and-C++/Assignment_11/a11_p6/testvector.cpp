//CH 230-A
//a11_p6.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream>
#include "Vector.h"
using namespace std; 


int main (){
    int size; 
    cin >> size; 
    Vector v1, v2; 
    double *ptr; 
    ptr = new double[size]; 
    for(int i = 0; i < size ; i++){
        cin >> ptr[i] ;
    }
    v1.set_Size(size);
    v1.set_ptr(ptr); 
    
    return 0; 
}