#include <stdio.h>

/*
CH-230-A
a2_p1.c
Irfan Karmali
i.karmali@jacobs-university.de
*/


int main() {
    
    double a, b, sum1, minus1, square; 
    int c, d, sum2, product, product2, product1, sum3, sum4; 
    char e, f; 


    printf("Enter first double:"); 
    scanf(" %lf", &a); 

    printf("Enter second double:");
    scanf(" %lf", &b);

    printf("Enter first integer:");
    scanf(" %d", &c); 

    printf("Enter second integer:");
    scanf(" %d", &d);


    printf("Enter first character:"); 
    getchar();
    scanf("%c", &e); 
    
    
    printf("Enter second character:");
    getchar();
    scanf("%c", &f); 
   



    /*OUTPUT */

    sum1 = a + b; 
    printf("Sum of doubles = %lf  \n", sum1);

    minus1 = a - b; 
    printf("difference of doubles = %lf \n", minus1);

    square = a * a; 
    printf("square = %lf \n", square); 

    sum2 = c + d ; 
    printf("sum of integers = %d \n", sum2);

    product = c * d; 
    printf("product of integers = %d \n", product); 

    sum3 = e + f; 
    printf("sum of chars = %d \n", sum3); 

    product2 = e * f; 
    printf("product of chars =%d \n", product2);

    sum4 = e + f; 
    printf("sum of chars = %c \n", sum4); 

    product1 = e * f; 
    printf("product of chars = %c \n", product1); 

    
    
    return 0;


}