#include <stdio.h>

/*
CH-230-A
a2_p4.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main () {
    float a, b, h, area1, area2, area3, area4;

    scanf("%f", &a); 
    scanf("%f", &b); 
    scanf("%f", &h); 

    area1 = a*a;
    area2 = a*b; 
    area3 = 0.5 * a * h; 
    area4 = 0.5 * h * (a+b);

    printf("square area=%f\n", area1);
    printf("rectangle area=%f\n", area2);
    printf("triangle area=%f\n", area3);
    printf("trapezoid area=%f\n", area4);

    return 0;


}