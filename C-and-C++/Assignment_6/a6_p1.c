#include <stdio.h>

/*
CH 230-A
a6_p1.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

//Creating SWAP macro
#define SWAP(x, y, data_type) {\
    data_type z; \
    z = x; \
    x = y; \
    y = z; \
}


int main () {
    //Declaring variables
    int x , y; 
    double a, b;
    //keyboard input for variables
    scanf ("%d %d", &x, &y);
    scanf ("%lf %lf", &a, &b);

    printf("After swapping:\n");
    //printing SWAPPED integers
    SWAP(x, y, int);
    printf("%d\n", x);
    printf("%d\n", y);
    //printing SWAPPED doubles
    SWAP(a, b, double);
    printf("%f\n", a);
    printf("%f\n", b);


    return 0; 
}