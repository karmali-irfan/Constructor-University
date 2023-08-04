//CH 230-A
//a8_p4
//Irfan Karmali
//i.karmali@jcaobs-university.de

#include <stdio.h>

//declaring structure
struct stack{
    unsigned int count; 
    int array[100];
}; 

//function declarations
void push(struct stack *stack1, int d); 
void bprint(struct stack *stack1); 
