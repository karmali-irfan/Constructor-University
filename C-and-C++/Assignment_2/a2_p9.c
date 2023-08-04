#include <stdio.h>

/*
CH-230-A
a2_p9.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main () {

    char a; 
    scanf("%c", &a);

    

    if (a>=48 && a<=57){
      printf("%c is a digit\n", a); }


    else if ( (a<=90 && a>=65) || (a>=97  && a<=122) ){
        printf("%c is a letter\n",a); 
    }

    else {
        printf("%c is some other symbol\n",a);

    }

    return 0;
}