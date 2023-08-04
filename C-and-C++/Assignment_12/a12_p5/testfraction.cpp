//CH 230-A 
//a12_p5
//Irfan Karmali 
//i.karmali@jacobs-university.de

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	//Initializing Fractions
	Fraction a, b, c, d;
	//User input for fractions using overloaded operators
	cin >> a >> b;
	c = a + b;
	d = a - b;
	cout << c << d; 
    return 0; 
}