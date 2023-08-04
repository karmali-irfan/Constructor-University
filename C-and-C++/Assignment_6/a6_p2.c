/*
CH 230-A
a6_p2.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

#include <stdio.h>

//Macro fucntion for LSB
#define LSB(c){\
    if (c & 1 << 0)\
        printf("The least significant bit is: 1\n");\
    else \
        printf("The least significant bit is: 0\n"); \
} \

int main () {
    //Declaring variables
    unsigned char c; 
    scanf("%c", &c); 
    getchar();

    printf("The decimal representation is: %d\n", c);
    //Calling the macro
    LSB(c);
    
    
    return 0; 
}