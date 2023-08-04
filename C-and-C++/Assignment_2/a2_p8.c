#include <stdio.h>

/*
CH-230-A
a2_p8.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main () {
 int b, c, d;
    scanf("%d", &b);
    c = b%2;
    d = b%7;
    

   if ((c==0) && (d==0)) { 
       printf("The number is divisible by 2 and 7\n"); 
   }

   else  {
       printf("The number is NOT divisible by 2 and 7\n");
   }

   return 0; 
}