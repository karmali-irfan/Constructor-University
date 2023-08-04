//CH 230-A 
//a12_p4
//Irfan Karmali 
//i.karmali@jacobs-university.de

#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;

class Fraction { //Fraction class

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	//int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
	void print();				// prints it to the screen
	//overloaded operator functions for fractions  
	friend Fraction operator *(Fraction &, Fraction &); 
	friend Fraction operator /(Fraction &, Fraction &);
	friend ostream &operator << (ostream &,  Fraction&);  
	friend istream &operator >> (istream &, Fraction &);
};

#endif 