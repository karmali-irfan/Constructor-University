/*
CH 230-A
a6_p6.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

#include <stdio.h>

int main () {
    //Declaring variables
    unsigned char c; 
    int i; 
    //scanf for user input of char
    scanf("%c", &c); 
    printf("The decimal representation is: %d\n", c); 
    //maximum number of bits for value inserted
    int max_bit = sizeof(c) * 8 - 1; 
    printf("The binary representation is: ");
    //For loop for printing the binary representation
    for (i = 0; i <= max_bit ; i++){
        if ((1 << (max_bit - i)) & c){
            printf("1");
        }

        else {
            printf("0");
        }
        
    }
    printf("\n");
    return 0;
}