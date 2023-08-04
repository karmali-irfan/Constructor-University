#include <stdio.h>

/*
CH-230-A
a2_p10.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main() {

    int a, b, d; 
    b=1; 
    d=24*b; 
    
    printf("Enter integer:");
    scanf("%d", &a); 

    while (a<=0){
        printf("Enter integer:");
        scanf("%d", &a); 
    }

    if (a>=1) {
        printf("%d day = %d hours \n", b,d);
    }
        
    while (a>=2){
        b++;
        d = 24*b;
        printf("%d days = %d hours  \n",b, d); 
        a--; 
            
        }
    
    return 0;  
}