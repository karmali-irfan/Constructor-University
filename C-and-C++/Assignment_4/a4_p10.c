#include <stdio.h>
#include <math.h>

/*
CH-230-A
a4_p10
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Function to calculate the results int the output
void proddivpowinv
(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
 //Delcaring the pointer values or the output
    *prod = a * b; 
    *div = a/b;
    *pwr = pow(a, b); 
    *invb = 1/b; 
    
}

int main () {
    //Decalring float varibales
    float a, b, prod, div, pwr, invb; 
    //Printf for the value of a
    printf("Enter value for a:");
    //scanf for the input for a
    scanf("%f", &a); 
    //printf for the value of b
    printf("Enter value for b:");
    //scanf fror the input of b 
    scanf("%f", &b); 

    //calling the function
    proddivpowinv (a, b, &prod, &div, &pwr, &invb); 


    //Printf for the output and result of calcualtion
    printf("Product of a and b: %f \n", prod); 
    printf("Division of a and b: %f \n", div); 
    printf("Power of a and b: %f \n", pwr); 
    printf("Inverse of b: %f \n", invb); 

    return 0; 

}