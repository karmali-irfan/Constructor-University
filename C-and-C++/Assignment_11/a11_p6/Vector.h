//CH 230-A
//a11_p6.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
using namespace std; 

class Vector{ 
    private: 
        int size; 
        double *ptr; 
    public: 
        Vector(); 
        Vector(int, double); 
        Vector(const Vector &); 
        ~Vector(); 
        void set_Size(int); 
        int get_Size();
        void set_ptr(double*);
        double get_ptr(); 
        double norm(); 
        double add(const Vector) const; 
        double minus(const Vector) const; 
        double product(const Vector) const; 
        void print(); 
}; 