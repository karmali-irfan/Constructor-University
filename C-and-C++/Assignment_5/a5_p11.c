#include <stdio.h>

/*
CH-230-A
a5_p11.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/


//Recurssive function to determine if integer is a prime number
int prime_number(int n, int b){

    //conditions to determine if an integer is not prime
    if (n%b == 0 && n == b ){
        return 1;
    }

    //conditions to determine if an integer is prime
    else if ( (n == 1) || (n%b == 0 && b < n)){
        return 0;
    }

    else {
        //calling the fucntion again 
        return prime_number(n, b + 1);
    }

}

//Main function
int main () {
    //Declaring integers
    int x; 
    scanf("%d", &x); 


    //print conditions for prime number and not a prime number
    if (prime_number(x, 2) == 0) {
        printf("%d is not prime\n", x); 
    }

    else if (prime_number(x, 2) == 1) {
        printf("%d is prime\n", x); 
    }


    return 0; 
}