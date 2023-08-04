/*
CH-230-A
a9 p2.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int n; 
    double x; 
    string s; 
    cout << "Insert integer value:"  ;
    cin >> n; //user input for integer
    cout << "Insert double value:" ;
    cin >> x; //user input for double
    cout << "Insert your string:" ; 
    getchar();
    getline(cin, s); //user input for string

    //for loop for printing the string n times
    for(int i = 0; i < n; i++){
        cout << s << ":" << x << endl ;
    }

    return 0;
}

