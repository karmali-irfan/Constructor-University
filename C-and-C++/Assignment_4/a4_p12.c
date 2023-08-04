#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
CH-230-A
a4_p12
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Function to replace characters
void replaceAll (char *str, char c, char e){
    //While loop to compare every character

    while (*str != '\0'){
     //if condition to replace character
        if (*str == c){
            printf("%c", e);
        }
     //else condition to print the same character
        else {
            printf("%c", *str); 
        }
        str++;
    }

}



int main () {
    char str[80]; 
    char c, e; 

     //while loop for the continuos insertion of the string 

    while (1){
        fgets(str, sizeof(str), stdin);
        //if condition to stop the loop
        if
        (str[0]=='s' &&
         str[1] == 't' &&
         str[2] == 'o' &&
         str[3] == 'p'
        )
        {
            break;
        }
        //else condition for user input
        else{
        scanf("%c", &c); 
        getchar();
        scanf("%c", &e);
        getchar(); 
        //calling function to replace 
        replaceAll(str, c, e);
        } 
    }

    return 0;
    

}