#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a4_p6
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Declaring a prototype function
int max_values (int array[], int l){
    //Declaring integer variables within the prototype
    //max and max1 are the two greatest values
    int n=0, max1, max2;
     
    //Declaring max values, so every other value will be
    //compared to these ones, and change if they are 
    //greater
        max1 = array[0]; 
        max2 = array[1];

        //Code for finding the max and max1 value in an array
        for (n = 2; n < l; n++) {
            if(array[n] > max1){
                //makes the old maximum integer equal to max2
                max2 = max1;
                //max1 takes on the new maximum integer
                max1 = array[n]; 
            }
            else if (array[n] > max2 && array[n] <= max1)
                max2 = array[n];
        }
    printf("The two greatest values are %d and %d\n", max2, max1);

    return max1;
}

//Declaration of main function
int main (){
    //Decalring integer variables and pointer
    int *dyn_array, how_many, i; 
    printf("How many elements?");
    scanf("%d", &how_many); 

    // code for dynamic memory allocation
    dyn_array = 
        (int*) malloc(sizeof(int) *how_many); 
    //Tellind the code to terminate if anything other
    //than an integer was entered
    if (dyn_array == NULL){
        exit (1); 
    }
    //for loop to allow us to enter only  a specific number of 
    //integers in our array
    for (i = 0; i < how_many ; i++){
        printf("Enter element:");
        scanf("%d", &dyn_array[i]); 
    }
    //Calling the function
    max_values(dyn_array, how_many);
    //freeing the memory
    free (dyn_array);

    return 0;

}
