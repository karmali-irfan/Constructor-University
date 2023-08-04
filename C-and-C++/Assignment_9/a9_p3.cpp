/*
CH-230-A
a9 p3.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
using namespace std; 

//function for returning absolute value
int absolute_value (float n){
    if(n<0){
        n = n * -1;
    }

    return n;
}


int main () {
    float n; 
    cin >> n; //user input for integer
    n = absolute_value(n);
    cout << n << endl; //output for absolute value
    return 0; 
}