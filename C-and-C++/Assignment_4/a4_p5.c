#include <stdio.h>
/*
CH-230-A
a4_p5
Irfan Karmali 
i.karmali@jacobs-university.de
*/

//Declaring function for counting consonants
int count_consonants (char *str){
    int count = 0;

 //While loop for counting the number of consonants
  while (*str != '\n'){
      //if condition to only count consonants
        if 
        (
            ( (*str >= 65 && *str <= 90) || 
            (*str >= 97 && *str <= 122) )&& 
            (
            *str != 97 && *str != 101 && *str != 105 && 
            *str != 111 && *str != 117 && 
            *str!=' ' && *str!=65 && *str!=69 && 
            *str != 73 && *str != 79 && *str!=85
            )
        )
        {
            count++;
            //Increasing the address of the pointer to move to the next value
            str++; 
        }
        
        else {
            str++;
        }
    }

    //printf for the number of consonants
    printf("Number of consanants = %d\n", count);

    return count; 
}

int main (){
    //Declaring variables
    char string[100]; 
    fgets(string, sizeof(string), stdin);

    //if condition to only consider strings
    //with values and not \n
    if (string[0] != '\n'){
        count_consonants(string);
    }

    //While loop for the continuos input of strings
    while (string[0] != '\n'){
        fgets(string, sizeof(string), stdin);
        if (string[0] != '\n'){
            count_consonants(string);
        }
        //else condition to break the loop
        else {
            break;
        }
    }


    return 0;
}