//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <iostream>
#include "Critter.h"

using namespace std;

//Setter methods for the private variables in the class
void Critter:: setName(string &newname) {
	name = newname;
}
void Critter::setHunger(int &newhunger) {
	hunger = newhunger;
}
void Critter:: setHeight(double &newheight){
	height = newheight;
}
void Critter:: setColor(string &newcolor){
	color = newcolor; 
}
void Critter:: setAge (int &newage){
	age = newage;
}
void Critter:: setBoredom (int &newboredom){
	boredom = newboredom;
}

//Getter methods for the private variables in the class
string Critter:: getName(){
	return name;
}
int Critter:: getHunger(){
	return hunger;
}
double Critter:: getHeight(){
	return height;
}
string Critter:: getColor(){
	return color; 
}
int Critter:: getBoredom(){
	return boredom; 
}
int Critter:: getAge(){
	return age;
}

//Print function
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ". ";
	cout << "My height is " << height << ". "; 
	cout << "My age is " << age << ". " ;
	cout << "My boredom level is " << boredom << ". " ;
	cout << "My favorite color is " << color << "." << endl;
}
