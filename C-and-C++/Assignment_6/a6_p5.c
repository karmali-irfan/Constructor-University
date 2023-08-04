// /*
// CH 230-A
// a6_p5.c
// Irfan Karmali
// i.karmali@jacobs-university.de 
// */

#include <stdio.h> 

int main() {
    //declaring variables
    unsigned char c; 
    //scanf for user input of data
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c); 


    printf("The backwards binary representation is: ");
    //while loop for the backwards binary representation
    while (c >= 1){
        if (c%2 == 1){
            printf("1");
        }

        else if (c%2 == 0){
            printf("0");
        }
    
         c = c/2 ; //changing the value of c for the next cycle
    }

    printf("\n");

    return 0;
}
char line[20];
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", x);
