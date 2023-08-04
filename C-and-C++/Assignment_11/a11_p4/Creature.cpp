//CH 230-A
//a11_p4.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
#include "Creature.h"
using namespace std; 

//Setting distance to 10
Creature:: Creature(): distance(10)
{}
//Print constructor
void Creature:: run() const{
    cout << "Creature runs " << distance << " meters" << endl; 
}

//Declaring distfactor
Wizard:: Wizard(): distFactor(3)
{}
//Print constructor
void Wizard:: hover() const{
    cout << "Wizard hovers " << distFactor * distance << " meters" << endl;
}

//Declaring distFactor
Hobbit:: Hobbit(): distFactor()
{}
//Print constructor
void Hobbit:: walk() const{
    cout << "Hobbit walks " << distFactor * distance << " meters" << endl; 
}

//Decalring distFactor
Gargoyle:: Gargoyle(): distFactor(2)
{}
//Printing constructor
void Gargoyle:: crawl() const{
    cout << "The gargoyle crawls " << distFactor * distance << " meters";
    cout << endl;
}





