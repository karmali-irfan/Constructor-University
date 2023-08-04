/* 
CH 230-A
a7_p5.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//Function for printing in ascedning order
int ascending (const void *va, const void *vb){
    const int* a = (const int*) va;
    const int* b = (const int*) vb;

    if(*a < *b)
        return -1;
    
    else if (*a > *b)
        return 1;

    else 
        return 0;
}


//Function for printing in descending order
int descending (const void *va, const void *vb){
    const int* a = (const int*) va;
    const int* b = (const int*) vb;

    if(*a > *b)
        return -1;
    
    else if (*a < *b)
        return 1;

    else 
        return 0;
}

//Main function
int main () {
    //declaring variables
    char c; 
    int n; 
    scanf("%d", &n); 
    int array[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    //declaring and assigning function pointers
    int (*fptr1) (const void*, const void*);
    int (*fptr2) (const void*, const void*);
    fptr1 = ascending;
    fptr2 = descending; 



    //Endless while loop
    while (1){
        scanf("%c", &c); 
        if(c == 'e'){
            break;
        }

        else if (c ==  'a') {
            qsort(array, n, sizeof(array[0]), (*fptr1)); 
             for (int i = 0; i < n; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }

        else if (c == 'd') {
            qsort(array, n, sizeof(array[0]), (*fptr2));
             for (int i = 0; i < n; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }
        
    }

    return 0;
}