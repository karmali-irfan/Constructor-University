//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p3

#include <iostream>
#include <cstring>
#include "City.h"

using namespace std; 

//Setter functions
void City:: set_Name (string newname){
    name = newname;
}
void City:: set_Population (int newpopulation){
    population = newpopulation; 
}

void City:: set_Mayor (string newmayor){
    mayor = newmayor; 
}

void City:: set_Area(double newarea){
    area = newarea; 
}

//Getter Functions
int City:: get_Population(){
    return population; 
}
double City:: get_Area(){
    return area; 
}
string City:: get_Name(){
    return name;
}
string City:: get_Mayor(){
    return mayor;
}

//Print functions
void City:: print(){
    cout << endl; 
    cout << "The name of the city is " << name << ". "; 
    cout<< "The populations is " << population << ". "; 
    cout << "The area of the city is " << area << ". "; 
    cout << "The mayor of the City is " << mayor << ". "; 
    cout << endl;  
}


