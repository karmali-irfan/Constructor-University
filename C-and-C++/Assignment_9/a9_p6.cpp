/*
CH-230-A
a9_p6.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
using namespace std; 

//function to return first integer value 
int myfirst(int array[]){
    for (int i = 0 ; i < 5 ; i++){
        if ( (array[i] > 0) && (array[i]%2 == 0) ){
            return array[i];
        }
    }
        return -1; 
}

//function to return first double value
double myfirst(double array[]){
    for (int i = 0 ; i < 5 ; i++){
        if ( (array[i] < 0) && ((int) array[i] == array [i])) {
            return array[i];
        }
    }
        return -1.1; 
}

//fucntion to return first constant in the array 
char myfirst(char array[]){
    for (int i = 0 ; i < 5 ; i++){
        if (array[i] != 'A' && array[i] != 'a' && 
            array[i] != 'E' && array[i] != 'e' &&
            array[i] != 'I' && array[i] != 'i' &&
            array[i] != 'O' && array[i] != 'o' &&
            array[i] != 'U' && array[i] != 'u' )
        {
            return array[i];
            cout << array[i];
        }
    }

    
    return 0; 
    
}




int main () {
    //Declaring variables
    double array[5], d; 
    int array1[5], num; 
    char array2[5], ch;


    cout << "Enter 5 doubles:"<< endl;
    //for loop for user input of doubles
    for (int i = 0; i < 5 ; i++){
        cin >> array[i]; 
    }

    cout << "Enter 5 integers:"<< endl;
    //for loop for user input of integers
    for (int i = 0; i < 5 ; i++){
        cin >> array1[i]; 
    }

    cout << "Enter 5 characters:"<< endl;
    //for loop for user input of chars
    for (int i = 0; i < 5 ; i++){
        cin >> array2[i]; 
    }

    cout << "Desired values:" << endl;


    d = myfirst(array); //function call
    if (d == -1.1){
        cout << "No such value exists" << endl;
    }
    else {
        cout << d << endl; 
    }

    num = myfirst(array1); //function call
    if (num == -1){
        cout << "No such value exists" << endl;
    }
    else {
        cout << num << endl; 
    }

    ch = myfirst(array2); //function call
    if (ch == 0){
        cout << "No such value exists" << endl;
    }
    else {
        cout << ch << endl; 
    }

    return 0;
}