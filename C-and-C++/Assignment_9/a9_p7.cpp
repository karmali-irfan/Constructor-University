                            /*
CH-230-A
a9_p7.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
using namespace std;
//function for swapping integers
void swapping(int &a, int &b) { 
    int temp;
    temp = a; 
    a = b; 
    b = temp; 
} 
//function for swapping floats
void swapping(float &x, float &y) { 
    float temp;
    temp = x; 
    x = y; 
    y = temp;
} 
//function for swapping chars
void swapping(const char *&str1, const char *&str2) { 
    const char *temp; 
    temp = str1; 
    str1 = str2;
    str2 = temp;
} 

int main(void) {
//declaring variables
int a = 7, b = 15;
float x = 3.5, y = 9.2; 
const char *str1 = "One"; 
const char *str2 = "Two";
//printing values before swap
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b); //function call for swapping integers
swapping(x, y); //function call for swapping floats
swapping(str1, str2); //function call for swappig chars
//printing values after swap
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}
