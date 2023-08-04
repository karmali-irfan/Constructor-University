//CH 230-A
//a11_p3.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
#include "Creature.h"
using namespace std; 

int main(){
    cout << endl << "Creating n Creature.\n";
    Creature c; //Initializing Creature
    c.run(); // Calling a function within Creature

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run(); //Initializing wizard
    w.hover(); // Calling a function within wizard

    cout << endl << "Creating a Hobbit" << endl;
    Hobbit h; //Initializing Creature
    h.run(); // Calling a function within hobbit
    h.walk();// Calling a function within hobbit

    cout << endl << "Creating a Gargoyle" << endl; 
    Gargoyle g; //Initializing Creature
    g.run(); // Calling a function within gargoyle
    g.crawl();// Calling a function within gargoyle
    cout << endl;

    return 0; 
}