#include <stdio.h>

/*
CH-230-A
a1_p4.c 
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

int main () {

    int x=17;
    int y=4;

    printf("x=%d\n", x);
    printf("y=%d\n", y);



    int sum ;
    sum=(x+y);
    printf("sum=%d\n", sum);

    int product; 
    product = (x*y);
    printf("product=%d\n", product);

    int minus ;
    minus = (x-y);
    printf("difference=%d\n", minus);

    double divide; 
    divide = ((double) x/y);
    printf("division=%f\n", divide);

    int r;
    r = (x%y); /* this is 'x' minus 'd' multiplied by 'y' */
    printf("the remainder of division = %d\n", r);





 
    return 0;

}