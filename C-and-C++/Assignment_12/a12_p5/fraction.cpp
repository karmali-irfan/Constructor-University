//CH 230-A 
//a12_p5
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

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);
	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;
    int i = 2;
	int num = a, num1 = b;
	//while loop for calculating GCD
	while ((i<=num) && (i<=num1)){
        if ( ((double)a/(double)i) == ((int)a/(int)i) ){
			a = a/i; 
		}
		if ( ((double)b/(double)i) == ((int)b/(int)i) ){
			b = b/i; 
				if (((double)b == (int)b) && ((double)a == (int)a)){
					tmp_gcd = tmp_gcd * i;
				}
		}
		i++;
    }
	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return (a * b) / (gcd(a, b));
}
void Fraction::print()
{
	//cout << num << "/" << den << endl;
	lcm(4,16);
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
//Overloaded operator function for computing the sum of fractions
Fraction Fraction:: operator +(Fraction first){
	Fraction result; 
	int a, b, c, d ;
	a = this->num; b = this->den; 
	c = first.num; d = first.den; 
	result.num = ( (a*lcm(b,d)) /b) + ((c*lcm(b,d)) /d); 
	result.den =  lcm(b,d); 
	return result;
}
//Overloaded operator function for computing the difference between fractions
Fraction Fraction:: operator -(Fraction first){
	Fraction result; 
	int a, b, c, d ;
	a = this->num; b = this->den; 
	c = first.num; d = first.den; 
	result.num = ( (a*lcm(b,d)) /b) - ((c*lcm(b,d)) /d); 
	result.den =  lcm(b,d); 
	return result;
	//please note that the output will not be in the most simplest forms
}
//Overloaded operator function for user input of the fractions 
istream &operator >> (istream &input, Fraction &a){
	cout << "Enter numerator: "; 
	input >> a.num; 
	cout << "Enter denominator: ";
	input >> a.den; 
	return input; 
}
//Overloaded operator function for output 
ostream &operator << (ostream &output, Fraction &a){
	if (a.num == a.den){
		output << "1" << endl; 
	}
	else {
		output << a.num << "/" << a.den << endl;
	}
	return output;
}