#include <stdio.h>
/* 
CH-230-A 
a3_p9
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

// Prototype function
double sum25(double v[], int n);


int main () {
    //declaring variables
    int b, a=0; 
    //scanf input for b
    scanf("%d", &b); 

    double array [20]; 

    // while loop for inserting integers
    while (a<b) {
        scanf("%lf", &array [a]);  
        a++;
    }

    // conditions for the output
    double sum = sum25(array, b); 
    if (sum != -111)
    {
        printf("sum=%lf\n", sum);
        
    }
    else {
        printf("One or both positions are invalid\n");
    }
    
  

    return 0;

}


//Function to calculate sum
double sum25(double v[], int n) {
    double sum;
    if (n<6){
        return -111; 
    }
    else {
        sum = v[2] + v[5] ; 
    }
    return sum; 
}