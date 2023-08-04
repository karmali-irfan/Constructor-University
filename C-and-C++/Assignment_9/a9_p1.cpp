/*
CH-230-A
a9_p1.cpp
Irfan Karmali
i.karmali@jacobs-university.de
*/

//Including files
#include <iostream>
#include <stdbool.h>

using namespace std;

int main () {
    //declaring a variable
    string country; 
    getline(cin, country); //getline for user input

    cout << country << '\n'; //printing the string inserted

    return 0;
}