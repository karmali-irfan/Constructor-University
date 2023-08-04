//CH 230-A
//a11_p4.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
#include "Creature.h"
using namespace std; 

int main(){ 
    string input;

    while(1){
        cin >> input; 

        if (input == "wizard"){
            Wizard *w; 
            w = new Wizard; 
            cout << "\nCreating a Wizard.\n";
            w->run();
            w->hover();
            delete w;
            cout << endl;
        }
        else if (input == "hobbit"){
            cout << endl << "Creating a Hobbit" << endl;
            Hobbit *h;
            h = new Hobbit; 
            h->run(); 
            h->walk();  
            delete h;
            cout << endl; 
        }
        else if (input == "gargoyle"){
            cout << endl << "Creating a Gargoyle" << endl; 
            Gargoyle *g;
            g = new Gargoyle;
            g->run(); 
            g->crawl();
            delete g;
            cout << endl;
        }
        else if (input == "quit"){
            break;
        }
    }

    return 0; 
}