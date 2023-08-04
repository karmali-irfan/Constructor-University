/*
CH 230-A
a6_p4.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

#include <stdio.h>
//Declaring macro
#define INTERMEDIATE

void product (int n, int vector1[n], int vector2[n]) {
    int product = 0, i = 0; 
    //if condition for the intermediate
    #if defined (INTERMEDIATE) 
    printf("The intermediate product values are:\n");
    for (i = 0; i < n; i++){
        
            printf("%d\n", vector1[i] * vector2[i]);
    }
    #endif
    //for loop for calculating the scalar product
    for (i = 0; i < n; i++){
        product = product + (vector1[i] * vector2[i]);
    }
    printf("The scalar product is: %d\n \n", product); 

}


int main() {
    //declaring variables
    int n, i; 
    printf("Enter dimensions of your vectors:");
    //scanf for user input
    scanf("%d", &n); 
    //declaring vectors
    int vector1[n], vector2[n];

    //for loop for the user input of the vectors
    for(i = 0 ; i < n ; i++){
        printf("Dimension %d of vector 1:", i + 1);
        scanf("%d", &vector1[i]); 
    }

    printf("\n");
    //
    for(i = 0 ; i < n ; i++){
        printf("Dimension %d of vector 2:", i + 1);
        scanf("%d", &vector2[i]); 
    }
    printf("\n");

    product(n, vector1, vector2); 

    return 0;
}