#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a5_p2.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/


//Void function for the divison
void divby5 (float arr[], int size){
    int i;
    //for loop for the division
    for (i = 0; i < size; i++){
        *arr = *arr / 5;
        arr++;
    }
}

int main () {
    //Declaring variables
    int i, j;
    float arr[6] = {5.5, 6.5, 7.75, 8, 9.6, 10.36};

    printf("Before:\n");
    //For loop for printing floats
    for (i = 0; i < 6; i++){
        printf("%0.3f ", arr[i]); 
    }

    printf("\n"); 

    divby5(arr, 6);
    printf("After:\n");
    //For loop for printing the new floats
    for (j = 0; j < 6; j++){
        printf("%0.3f ", arr[j]);
    }
    printf("\n");
    
    return 0; 


}