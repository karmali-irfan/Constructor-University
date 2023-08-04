//CH 230-A
//a8_p4
//Irfan Karmali
//i.karmali@jcaobs-university.de

#include "stack.h"
#include <stdio.h>

//function to push remainders into the stack
void push (struct stack *stack1, int d){
    stack1->array[stack1->count] = d; 
    stack1->count = stack1->count + 1; 
}

//function to print the stack
void bprint(struct stack *stack1){
    while (stack1->count != 0){
        stack1->count = stack1->count - 1;
        printf("%d", stack1->array[stack1->count]); 
    }
    printf("\n");
}