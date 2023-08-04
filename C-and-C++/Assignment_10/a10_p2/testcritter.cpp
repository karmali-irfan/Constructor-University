//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(){
	//Initializing variables
	Critter c;
	string name, color;
	int hunger, age, boredom;
	double height; 
 
	cout << endl << "Please enter data: " << endl;
	//Input functions for the variables are below
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout<< "Set height in cm: ";
	cin >> height ; 
	c.setHeight(height); 

	cout << "Set favorite color: "; 
	cin >> color; 
	c.setColor(color);

	cout << "Set age: "; 
	cin >> age; 
	c.setAge(age); 

	cout << "Set Boredom: "; 
	cin >> boredom; 
	c.setBoredom(boredom); 

	//Output
	cout << "You have created:" << endl;
	c.print(); //calling print function 

    return 0;
}