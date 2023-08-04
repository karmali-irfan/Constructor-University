#include <stdio.h>

/*
CH-230-A
a2_p3.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main() {

    int weeks, days, hours, total;
    printf("Enter number of weeks:");
    scanf("%d", &weeks); 

    printf("Enter number of days:");
    scanf("%d", &days); 

    printf("Enter number of hours:");
    scanf("%d", &hours); 

    total = weeks * 7 * 24 + days * 24 + hours;
    printf("Total number of hours = %d \n", total); 

    return 0;  


}