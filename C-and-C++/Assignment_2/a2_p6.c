#include <stdio.h>

/*
CH-230-A
a2_p5.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main () {
    double x;
    printf("x="); 
    scanf("%lf", &x); 

    double y; 
    printf("y="); 
    scanf("%lf", &y); 

    double *ptr_one, *ptr_two, *ptr_three; 
    ptr_one = &x; 
    ptr_two = &x;
    ptr_three = &y; 

    printf("Address of pointer 1= %p \n", ptr_one);
    printf("Address of pointer 2= %p \n", ptr_two);
    printf("Address of pointer 3= %p \n", ptr_three);

    return 0;

    
}