//CH 230-A
//a8_p4
//Irfan Karmali
//i.karmali@jcaobs-university.de

#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

int main () {
    //Declaring a variable
    struct stack *stack1; 
    //Allocating memory
    stack1 = (struct stack*) malloc(sizeof(struct stack)); 
    stack1->count = 0; 
    int num, d; 
    scanf("%d", &num); //user input

    //while loop for getting the remainders
    while (num >= 1){
        d = num%2; 
        //pushing the remainder into the function
        push(stack1, d);
        num = num/2; 
    }

    //calling funtion to print the stack
   bprint(stack1);
   free(stack1); //freeing memory

    return 0; 
}