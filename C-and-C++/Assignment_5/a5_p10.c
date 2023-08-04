#include <stdio.h>

/*
CH-230-A
a5_p10.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/

int count_down(int n){
    if ( n == 1){
        printf("%d\n", n); 
    }

    else {
        printf("%d\n", n); 
        count_down(n-1); 
    }

    return n; 
}

int main () {
    int n;
    printf("Enter integer:");
    scanf("%d", &n); 

    count_down(n);

    return 0;
}