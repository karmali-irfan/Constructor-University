/*
CH-230-A
a9 p4.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; 

//mycount function for returning substraction 
int mycount (int a, int b){
    return b - a;
}

//mycount function for returning count
int mycount(string s, char c){
    int count = 0;
    int b = s.length();
    //for loop for counting chars
    for (int i = 0; i < b; i++){
        if(s[i] == c){
            count++;
        }
    }
    return count;
}


int main () {
    //Declaring variables
    string s; 
    char c; 
    int a; 
    int b;
    cout << "Enter your string:" ;
    getline(cin, s); //User input for string 
    cout << "Enter character:"; 
    cin >> c; //User input for char

    cout << "Enter number:" ;
    cin >> a; //user input for integer2
    cout << "Enter second number:"; 
    cin >> b; //user input for integer

    cout << endl; 
    //calling overloaded functions
    cout << "Substraction is equal to:" << mycount(a, b) << endl; 
    cout << "Number of characters is equal to: " << mycount(s, c) << endl;


    return 0;
}
