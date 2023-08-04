#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//Function for counting desired characters
int count_insensitive(char *str, char c){
    int count = 0;
    char low, upper;
    //to address the lower and upper cases
    low = tolower(c);
    upper = toupper(c);

    //while loop to count desired characters in a string
    while (*str != '\0'){
        if (*str == low || *str == upper){
            count++;
        }
        //incrementing the adress of the pointer
        str++;
    }

    return count;
}

int main () {
    //initializing variables
    int len; 
    char *dyn_array, *dyn_array1, c;
    //character for the number '8'. I used the ASCII code
    c = 56; 

    //Allocating memory for a string of 50 char
    dyn_array = (char*) malloc(sizeof(char) * 50); 
    //Allocating string to the memory
    fgets(dyn_array, sizeof(dyn_array), stdin);
    //Calculating lenght of string
    len = strlen(dyn_array);
    //Allocating specific memory for the new string
    dyn_array1 = (char*) malloc(sizeof(char) *len);
    //freeing memory
    free(dyn_array); 
    //copying string onto the new memory
    strcpy(dyn_array1, dyn_array);

    //printing the output
    printf("The character 'b' occurs %d times.\n", count_insensitive(dyn_array1, 'b') );
    printf("The character 'H' occurs %d times.\n", count_insensitive(dyn_array1, 'H') );
    printf("The character '8' occurs %d times.\n", count_insensitive(dyn_array1, c) );
    printf("The character 'u' occurs %d times.\n", count_insensitive(dyn_array1, 'u') ); 
    printf("The character '$' occurs %d times.\n", count_insensitive(dyn_array1, '$') );


    //freeing the memory
    free(dyn_array1);

    return 0;
}