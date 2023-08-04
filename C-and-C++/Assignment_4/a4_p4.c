#include <stdio.h>
/*
CH-230-A
a4_p4
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Declaring function for counting consonants
int count_consonants (char str []){
    int count = 0, p = 0;

 //For loop for counting the number of consonants

    for (p = 0 ; str[p] != '\n'; p++) {
        //if condition to only count consonants
        if 
        (
            ( (str[p]>=65 && str[p]<=90) || (str[p]>=97 && str[p]<=122) )&& 
            (
            str[p]!=97 && str[p]!=101 && str[p]!=105 && 
            str[p]!=111 && str[p]!=117 && 
            str[p]!=' ' && str[p]!=65 && str[p]!=69 && 
            str[p]!=73 && str[p]!=79 && str[p]!=85
            )
        )
        {
            count++;
        }
    }
    //printf for the number of consonants
    printf("Number of consonants=%d\n", count);

    return count; 

}

int main () {
    char string [100]; 
    //Declaring variables
    fgets(string, sizeof(string), stdin); 

    //if condition to only consider strings
    //with values and not \n
    if (string[0] != '\n')
        count_consonants(string);

    //While loop for the continuos input of strings
    while ((string[0] != '\n')){
        fgets(string, sizeof(string), stdin); 
        if (string[0] != '\n')
          count_consonants(string);
        //else condition to break the loop
        else{
            break;
        }
        
    }

    return 0; 

}