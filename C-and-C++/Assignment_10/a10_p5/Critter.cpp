//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <iostream>
#include "Crittter.h"

using namespace std;
//Function for converting to double
double Critter:: converting_to_double (int newhunger){
	return hunger = newhunger / 10;
}
//Function for converting to integer
int Critter:: converting_to_int (double newhunger){
	return hunger = newhunger * 10;
}

//Setter method for name
void Critter:: setName(string& newname) {
	name = newname;
}
//Setter method for hunger
void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
//Print function
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." ; 
	cout << " My boredom level is " << boredom << ". My height is "; 
	cout << height << "." << endl; 
}
//Getter function for hunger
int Critter::getHunger() {
	return hunger;
}