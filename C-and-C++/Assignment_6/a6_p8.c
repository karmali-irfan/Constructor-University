/*
CH 230-A
a6_p8.c
Irfan Karmali
i.karmali@jacobs-university.de 
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
    int info; 
    struct list    *      next; 
};

void print_list (struct list *my_list){
    while (my_list != NULL){
        printf("%d ", my_list -> info);
        my_list = my_list -> next;
    }
}


struct list* push_back(struct list *my_list, int value) { 
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list; 
    }
    newel->info = value; 
    newel->next = my_list; 

    return newel;
}

struct list* remove_element(struct list* my_list){
    struct list *p1, *p2; 
    p1 = my_list;
    p2 = my_list -> next;

    free(p1);
    return p2; 
}


struct list* push_front(struct list* my_list, int value) {
 struct list *cursor , *newel;
 cursor = my_list;
 newel = (struct list *) malloc(sizeof(struct list));

 if (newel == NULL) {
    printf("Error allocating memory\n");
    return my_list;
 }

 newel ->info = value;
 newel ->next = NULL;

 if (my_list == NULL)
    return newel;

 while (cursor ->next != NULL)
    cursor = cursor ->next;

    cursor ->next = newel;

    return my_list;
}

void dispose_list(struct list* my_list) { 
    struct list *nextelem;

    while (my_list != NULL) {
        nextelem = my_list ->next; 
        free(my_list);
        my_list = nextelem;
    } 
}

 

int main () {
    struct list* my_list = NULL;
    char c; 
    int n; 
    
    while (1){
        scanf("%c", &c); 
        
        //adding the number at the end of the list
        if (c == 'a'){
            scanf("%d", &n);
            my_list = push_front (my_list, n);

        }

        // //adding the number at the beginning of the list
        else if (c == 'b'){
            scanf("%d", &n);
            my_list = push_back (my_list, n);

        }

        // //removing the first element
        else if (c == 'r'){
            my_list = remove_element(my_list);
        }

        // //printing the list
        else if (c == 'p'){
            scanf("%d", &n);
            print_list(my_list); 
            printf("\n");
        }

        // //freeing memory used by the list
        else if (c == 'q'){
            dispose_list(my_list);
            break; 
        }

    }

    return 0; 
}