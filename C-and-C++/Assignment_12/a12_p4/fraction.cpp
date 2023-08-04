//CH 230-A 
//a12_p4
//Irfan Karmali 
//i.karmali@jacobs-university.de

#include <iostream>
#include "fraction.h"
using namespace std; 

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

// Fraction::Fraction(int n, int d)
// {
// 	int tmp_gcd = gcd(n, d);

// 	num = n / tmp_gcd;
// 	den = d / tmp_gcd;
// }

// int Fraction::gcd(int a, int b)
// {
// 	int tmp_gcd = 1;
//     int i = 1;
// 	//while loop for calculating GCD
// }

// int Fraction::lcm(int a, int b)
// {
// 	return a * b / gcd(a, b);
// }

void Fraction::print()
{
	cout << num << "/" << den << endl;
}
//Overloaded operator function for computing the product of fractions
Fraction operator *(Fraction &first, Fraction &second){
	Fraction result; 
	result.num = first.num * second.num; 
	result.den = first.den * second.den; 
	return result;
}
//Overloaded operator function for computing the quotient of fractions
Fraction operator /(Fraction &first, Fraction &second){
	Fraction result; 
	result.num = first.num * second.den; 
	result.den = first.den * second.num; 
	return result;
}
//Overloaded operator function for printing the fractions
ostream &operator << (ostream &output,  Fraction &a){
	if (a.num == a.den){ //condition if the answer is meant to be 1
		output << "1" << endl;
	}
	else{
		output << a.num << "/" << a.den << endl;
	}
	return output;	
}  
//Overloaded operator for user input for the fractions 
istream &operator >> (istream &input, Fraction &a){
	cout << "Enter numerator: ";
	input >> a.num ;
	cout << "Enter denominator: ";
	input >> a.den ;
	return input; 
}