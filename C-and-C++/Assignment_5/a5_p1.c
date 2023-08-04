#include <stdio.h>
/*
CH-230-A
a5_p1.c
Irfan Karmali 
i.karmali@jacobs-university.de
*/

int main () {
    //Declaring variables
    int n, i, j, k; 
    char c; 

    //scanf for the user input of c and n
    scanf("%d", &n); 
    getchar();
    scanf("%c", &c); 

    //Declaring k as equal to n
    k = n;


    //for loop for printing the triangle
    for (i = 0; i < k ; i++){
        for (j = 0; j < n; j++){
            printf("%c", c);
        }
        n--;
        printf("\n");
    }

  
    return 0; 
}