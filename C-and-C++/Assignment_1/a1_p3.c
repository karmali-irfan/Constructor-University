#include <stdio.h>

/*
CH-230-A
a1_p3.c 
Irfan Karmali 
i.karmali@jacobs-university.de 
*/

int main() {
    float result; /* The result of the division */
    int a =5;
    float b = 13.5; 
    result = a/b; 
    printf("The result is %f\n",result);

    return 0;

}

/* 
For b=13.5, the initial C indentifier mentioned "integer" which is inaccurate since the variable type is a float variable. So I changed it to float. 

Also in the printf command the intial program mentioned '%d' which is inaccurate since it is forintegers. Which won't work since our variable 'b'
is a decimal. Hence, I replaced it with %f which would allow for a more accurate and a decimal answer.

*/