#include <stdio.h>

/*
CH-230-A
a2_p5.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main () {
    int a, *ptr_a; 
    printf("a=");
    scanf("%d", &a);
   
    ptr_a = &a;
    
    
    printf("Address of pointer = %p \n", ptr_a);
    *ptr_a = *ptr_a + 5;
    printf("Value of a = %d \n", *ptr_a); 
    printf("Address of pointer = %p \n", ptr_a);
   
   return 0; 

}