#include <stdio.h>

int main () {
    /*Declaring float variable*/
    float x; 
    /*Scanf for the input of the float varibale x*/
    scanf("%f", &x);
    /*Declaring integer variable d, this will be used in the loop*/
    int d=1; 
    /*Declaring integer variable n*/
    int n; 
    /*Scanf for the input for the integer variable n */
    scanf("%d", &n); 


    /*While loop to keep asking for an input if an invalid integer was
    used*/
    while (n<=0){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

    /* For loop for the repetition of the float n time */
    for (d=1;d<=n;d++) {
        printf("%f\n",x); 
    }
    return 0; 

}