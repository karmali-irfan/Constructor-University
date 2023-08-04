#include <stdio.h>
/* 
CH-230-A 
a3_p8
Irfan Karmali 
i.karmali@jacobs-university.de 
*/



// Function for the sum 
float sum (int c, float b[]) {
    int i; 
    //w is the sum of variables
    float w = 0; 

    if (b[c] != -99){
        for (i=1; c>=0 ; c--) {
        w = w + b[c]; 
        }
    }

    else {
        for (i=1; c>=0 ; c--) {
        w = w + b[c-1]; 
    }
    }

    printf("%f\n", w);
   return w;
}


//Function for the average
float average (int c, float b[]) {
    int i, a; 
    float w, z;
    w = 0; 

    if (b[c] != -99){
        a = c; 
        for (i=1; c>=0 ; c--) {
        w = w + b[c]; 
        //z is the average of variables
        z = w/a ;
        }
    }

    else {
        a = c - 1; 
        for (i=1; c>=0 ; c--) {
        w = w + b[c-1]; 
        //z is the average of variables
        z = w/a;
    }
    }
    printf("%f\n", z);
   return z;
}

int main () { 
int n=0;
    float a [10]; 

    //While loop for the insertion of float variables
    while ((a[n] != -99) && (n<10)) {
        scanf("%f", &a[n]); 
        n++;
    } 

main

    sum(n, a);
    average (n, a);

    return 0;
}