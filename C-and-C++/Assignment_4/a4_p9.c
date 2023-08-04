#include <stdio.h>
#include <stdlib.h>

/*
CH-230-A
a4_p9
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Function to calculate the product between max and min
//Declaring integers
int prodminmax (int array[], int n){
    int i, max = array[0], min = array[0], result; 

 //For loop to calculate the max value 
    for(i = 0; i < n; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
 //For loop to calculate the min value
    for(i = 0; i < n ; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    //Result for the product of max and min
    result = max * min;
    //Printf for the result
    printf("%d\n", result);
    return result;
}

int main () {
    //Declaring integers, including dynamic array pointer
    int n, i, *dynamic_array ;
    printf("Enter number of elements:");
    //Scanf for user input for the no. of elements 
    scanf("%d", &n);
    //Delcaring dynamic_array as a dynamic pointer
    //using malloc
    dynamic_array = (int*) malloc(sizeof(int) *n); 

    //For loop for user input of the integers
    for(i = 0; i < n; i++){
        printf("Enter element:");
        scanf("%d", &dynamic_array[i]);
    }

    //callinge the function to give the user an output
    prodminmax(dynamic_array, n);
    //freeing the memory
    free (dynamic_array);
    return 0; 
}