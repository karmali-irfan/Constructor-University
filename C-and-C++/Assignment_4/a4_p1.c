#include <stdio.h>
#include <math.h>
/*
CH-230-A
a4_p1
Irfan Karmali 
i.karmali@jacobs-university.de
*/



int main () { 
    // Declaring float variables
    float x, y, z, i;
    //Scanf for the input for the lower limit
    scanf("%f", &x); 
    //Scanf for the input for the upper limit
    scanf("%f", &y); 
    //Scanf for the input for the increment
    scanf("%f", &z); 

    //For loop for printing the radius, area, and circumference
    for (i = x; i<=y ; i += z){
        printf("%f %f %f\n", i, i * i * M_PI,  2 * M_PI * i ); 
        //Equation to increment the radius by the inserted value

    }

    return 0;


}