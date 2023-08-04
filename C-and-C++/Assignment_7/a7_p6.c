/* 
CH 230-A
a7_p6.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


//Declaring the structure
struct person {
    char name [30]; 
    int age; 
};


int main () {
    //Delcaring variables
    int number, age, check, temp; 
    scanf("%d", &number); 
    //Initializing an array of structures
    struct person person[number];
    //declaring strings
    char line[30], temp1[30];


    //For loop for user input 
    for (int i = 0; i < number; i++){
        getchar();
        fgets(line, sizeof(line), stdin); 
        line[strlen(line) - 1] = '\0';
        strcpy(person[i].name, line);
        scanf("%d", &age);
        person[i].age = age;  
    }


    //for loop for sorting the strcutures in terms of age
    for (int i = 0; i < number - 1; i++){
        check = 0;

        for (int j = 0; j < number - 1 - i; j++){
            if (person[j].age > person[j+1].age){
                temp = person[j].age;
                person[j].age = person[j+1].age;
                person[j+1].age = temp; 

                strcpy(temp1, person[j].name);
                strcpy(person[j].name, person[j+1].name);
                strcpy(person[j+1].name, temp1); 

                check = 1; 
            }
        }
    

        if (check == 0){
            break;
        }
    }

    //for loop for sorting thre numbers in terms of name
    for (int i = 0; i < number ; i++){
        for (int j = 0; j < number; j++){
            if (person[j].age == person[j + 1].age){
                for (int k = 0; k < 30 ; k++){
                    if ( person[j].name[k] > person[j+1].name[k] ) {
                        temp = person[j].age ;
                        person[j].age = person[j+1].age; 
                        person[j+1].age = temp;

                        strcpy(temp1, person[j].name); 
                        strcpy(person[j].name, person[j+1].name);
                        strcpy(person[j+1].name, temp1);
                    }
                }
            }
        }
    }


    //for loop for printing the structure array
    for (int i = 0; i < number; i++){
        printf("{%s, %d}; ", person[i].name, person[i].age);  
    } 


    printf("\n");
    return 0;
}