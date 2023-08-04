#include <stdio.h>

/*
CH-230-A
a5_p3.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/

//Function for counting lower case letters
int count_lower (char *str){
    //Variable for counting
    int count = 0; 
    //While loop for counting char
    while (*str != '\0'){
    //If condition for only considering lower case char
        if(*str >= 97  && *str <= 122){
            count++;
        }
        else {
            
        }

        str++;
    }
    //Printf for the count
    printf("%d\n", count);
    return count; 
}

int main () {
    //Declaring the string
    char str[50]; 

    //Loop for the insertion of strings
    while (1){
        fgets(str, sizeof(str), stdin); 
       //if condition to stop the string if an empty string was entered
        if (str[0] != '\n'){
            count_lower(str); //calling the function to count char
        }
        else {
            break; //breaking the loop if an empty line was entered
        }

    }
    
    return 0;
    
}

