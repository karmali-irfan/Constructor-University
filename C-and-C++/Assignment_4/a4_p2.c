#include <stdio.h>
/*
CH-230-A
a4_p2
Irfan Karmali 
i.karmali@jacobs-university.de
*/


int main () {
    //Declaring a string variable
    int i;
    char line [50];
    
    //Fgets for user input of string
    fgets(line, sizeof(line), stdin);

    //for loop for the output
    for (i = 0; line[i]!='\n'; i++){
//char will print on the margin if it is in an even position
        if ((i%2) == 0){
            printf("%c\n", line [i]);
        }
//char will print with a space if it is in an odd position
        else {
            printf(" %c\n", line [i]);
        }
    }

    return 0; 

}
