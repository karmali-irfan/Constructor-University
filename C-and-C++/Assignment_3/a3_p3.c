#include <stdio.h>

/* 
CH-230-A 
a3_p3
Irfan Karmali 
i.karmali@jacobs-university.de 
*/


//Function for the conversion
float convert(int cm)
{
    return ((float)cm / 100000);
    
}

int main () { 
    // Declaring integer variable 
    int a;
    // input for the integer variable
    scanf("%d", &a); 
    float c;


    /*Calling convert function into main function*/
    c = convert(a); 
    printf("Result of conversion: %f\n",c);

    return 0;
}

