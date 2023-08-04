//CH 230-A 
//Irfan Karmali
//i.karmali@jacobs-university.de
//a11_p1

#include <iostream>
#include "Box.h"
using namespace std;

int main () {
    //Declaring variables
    int n, b, j = 0;
    double h, w, l;
    Box *arr;  
    cin >> n; 
    b = 2 * n;
    //dynamic allocation
    arr = new Box[b];
    //for loop for user input
    for (int i = 0; i < n ; i++){
        cin >> h;
        arr[i].set_Height(h); 
        cin >> w;
        arr[i].set_Width(w); 
        cin >> l;
        arr[i].set_Length(l); 
    }
    //for loop for copying
    for (int i = n ; i < b ; i++){
        arr[n] = Box(arr[j]);
        n++; 
        j++;
    }
    cout << endl;
    //for loop for the output
    for (int i = 0; i < b; i++){
        cout << arr[i].get_Volume() << endl; 
    } 

    delete []arr; //deleting memory
    
    return 0;
}