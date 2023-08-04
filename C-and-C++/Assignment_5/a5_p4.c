#include <stdio.h>
#include <stdlib.h>


/*
CH-230-A
a5_p4.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/

//Void function for the divison
void divby5 (float arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        arr[i] = arr[i] / 5; 
    }


}

int main () {
    //Declaring variables
    float *dyn_arr; 
    int size, i; 

    //Printf and scanf for the number of floats
    printf("Enter number of floats:");
    scanf("%d", &size); 
    //declaring the dynamic array
    dyn_arr = (float*) malloc(sizeof(float) *size);
    //for loop for input of the floats
    for(i=0; i<size ; i ++){
        scanf("%f", &dyn_arr[i]);
    }
    //For loop for printing floats
    printf("Before:\n"); 
    for(i = 0; i < size; i++){
        printf("%0.3f ", dyn_arr[i]); 
    }

    divby5(dyn_arr, size);
    //For loop for printing the new floats
    printf("\nAfter\n");
    for(i = 0; i < size; i++){
        printf("%0.3f ", dyn_arr[i]); 

    }

    printf("\n");

    free(dyn_arr);
    return 0;

}