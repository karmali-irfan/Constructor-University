/*
CH 230-A
a6_p7.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

#include <stdio.h>

//void function to set 3 bits
void set3bits(unsigned char c, int a, int b, int d){
    int i, position; 
    int max_bit = sizeof(c) * 8 - 1;
    printf("After setting the bits: ");

    //For loop for printing the bits
    for( i = 0; i <= max_bit; i++){
        position = max_bit - i; 

        if (position == a || position == b || position == d){
            printf("1"); 
        }

        else if (c & (1 << position)){
            printf("1"); 
        }

        else {
            printf("0"); 
        }
    }
    printf("\n");
}

int main () {
    int a, b, d; 
    unsigned char c; 
    //scanf's for user input of values
    scanf("%c", &c); 
    scanf("%d", &a); 
    scanf("%d", &b); 
    scanf("%d", &d);
    //printf for the decimal representation
    printf("The decimal representation is: %d\n", c);

    printf("The binary representation is: "); 
    int i; 
    int max_bit = sizeof(c) * 8 - 1;  
    //for loop for printing the bits
    for (i = 0; i <= max_bit; i ++){
        if (c & 1 << (max_bit -i)){
            printf("1"); 
        }

        else {
            printf("0");
        }
    }
    printf("\n");
    //calling the function to set 3 bits
    set3bits(c, a, b, d);


    return 0;
}