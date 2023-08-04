//CH 230-A
//a11_p6.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
using namespace std; 
#include "Vector.h"


Vector:: Vector(){ 
    size = 0; 
    ptr = NULL; 
}

Vector:: Vector(int ns, double np){
    size = ns; 
    ptr = new double[0]; 
    ptr = &np;
}

Vector:: Vector(const Vector &V){
    size = V.size; 
    ptr = V.ptr; 
}

Vector:: ~Vector(){
    delete []ptr; 
}

void Vector:: set_Size(int ns){
    size = ns; 
}

int Vector:: get_Size(){
    return size; 
}

void Vector:: set_ptr(double *np){
    ptr = new double[0];
    ptr = np;
}

// double get_ptr(){
//     return *ptr; 
// }

// double Vector:: norm(){

// }

double  Vector:: add(const Vector &V) const{
    for (int i = 0; i < size; i++ ){
        return V.ptr[i] + ptr[i]; 
    }
}

// double  Vector:: minus(const Vector) const{

// }

// double  Vector:: product(const Vector v) const{
//     for (int i = 0; i < size ; i++){
//         v[i] * vector[i]; 
//     }
// }

void Vector:: print(){
    for (int i = 0; i < size; i++){
        cout << ptr[i] << " " << endl; 
    }
}