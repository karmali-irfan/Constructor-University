//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main()
{
	//Declaring first Object
	Critter c1; 
	c1.print();
	//Declaring second Object
	Critter c2("Name"); 
	c2.print(); 
	//Declaring third Object 
	Critter c3(2, 10, "new", 30);
	c3.print();
	//Declaring fourth Object
	Critter c4(2, 8, "new");
	c4.print();
	cout << endl;

    return 0;
}