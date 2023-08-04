/* 
CH 230-A
a7_p1.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


//main function
int main () {
    struct list *my_list = NULL; 
    char c; 
    
    int n; 

    //while loop to run the program including specific function calls
    while (1){
        scanf("%c", &c);

        if (c == 'a'){
            scanf("%d", &n);
            my_list = push_back(my_list, n);
         }

        else if (c == 'b'){
            scanf("%d", &n);
            my_list = push_front(my_list, n);   
        }

        else if (c == 'r'){
            my_list = remove_element(my_list); 
        }

        else if (c == 'p'){
            print_list(my_list);
            printf("\n");
        }

        else if (c == 'q'){
            free_memory(my_list); 
            break;
        }

    }

    return 0;
}