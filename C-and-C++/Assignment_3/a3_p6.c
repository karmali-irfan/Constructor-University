#include <stdio.h>
/* 
CH-230-A 
a3_p6
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

//Function for the converstion
float to_pounds (int kg, int g) {
    return (float) (kg * 2.2) + (g * (2.2/1000));    
}

int main () {
    //Declaring integer variables
    int a,b;
    //Scanf for the input 
    scanf("%d", &a); 
    scanf("%d", &b); 

    printf("Result of conversion: %f\n", to_pounds(a,b));

    return 0; 
}