#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
CH-230-A
a5_p7.c 
Irfan Karmali
i.karmali@jacobs-university.de
*/

int main () {
    //declaring variables
    char str1[100], str2[100], *str; 

    //fgets for the strings
    fgets(str1, sizeof(str1), stdin); 
    fgets(str2, sizeof(str2), stdin);
    //replacing '\n' with '\0'
    str1[strlen(str1) -1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    //dynamically allocating memory for str
    str = (char*) malloc(sizeof(char) * ((strlen(str1)) + (strlen(str2)))); 

    
    strcat(str1, str2);
    strcpy(str, str1);

    printf("Result of concatenation: %s\n", str);

    free(str);

    return 0;
}