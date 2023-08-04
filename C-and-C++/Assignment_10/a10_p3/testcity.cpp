//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p3

#include <iostream>
#include <cstring>
#include "City.h"

using namespace std; 

int main () {
    City c1, c2; 
    //Setting values for c1
    c1.set_Name("Bremen"); 
    c1.set_Population(10000); 
    c1.set_Mayor("Irfan"); 
    c1.set_Area(28759);
    //Setting values for c2
    c2.set_Name("Paris"); 
    c2.set_Population(2111); 
    c2.set_Mayor("Aleena"); 
    c2.set_Area(1030);
    //setting values for c3
    City c3(1234, "Zaid", 4321, "London");
    //Calling Print fucntions 
    c1.print();
    c2.print(); 
    c3.print(); 
     
    return 0; 
}
