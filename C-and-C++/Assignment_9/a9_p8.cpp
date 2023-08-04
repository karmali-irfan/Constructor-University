/*
CH-230-A
a9_p7.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
using namespace std;
//Function for substracting the maximum value
void substract_max(int *ptr, int n){
    int max = ptr[0]; 
    for (int i = 0; i < n ; i++){
        if (ptr[i] > max){
            max = ptr[i];
        }
    }

    for (int i = 0; i < n ; i++){
        ptr[i] = max - ptr[i];
    }
}
//function for deallocating memory
void deallocate(int ptr[]) {
    delete []ptr;
}

int main () {
    int n; 
    cin >> n; //user input for integer
    //Allocating memory
    int *ptr = new int[n]; 
    //for loop for user input of the array
    for (int i = 0; i < n ; i++){
        cin >> ptr[i];
    }

    substract_max(ptr, n); //function call for substracting
    cout<< "{ ";
    //for loop for output of the new array
    for (int i = 0; i < n ; i++){
        cout << ptr[i] << " " ; 
    }
    cout << "}" << endl; 

    deallocate(ptr); //function call to deallocate memory


    return 0; 
}