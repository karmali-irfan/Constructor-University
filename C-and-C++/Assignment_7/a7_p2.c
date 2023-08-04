//CH 230-A
//a7-p2
//Irfan Karmali 
//i.karmali@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

//Declaring a strcuture
struct node{
    char data; 
    struct node *next; 
    struct node *prev;
};

//Function for adding new element to the front of the list
struct node* addtofront(struct node *head, char c){
    struct node *newel;
    newel = (struct node*) malloc(sizeof(struct node)); 
    if (newel == NULL){
        printf("Error allocating memory\n");
    }
    newel -> data = c;
    newel -> next = NULL ;
    newel -> prev = NULL;

    if(head == NULL){
        newel -> next = head;
        return newel;
    }

    else {
        newel -> next = head;
        head -> prev = newel; 
        return newel; 
    }

}

//Function for printing list
void print_list(struct node *head){ 
    //while loop for printing
    while (head != NULL){
        printf("%c ", head -> data);
        head = head -> next; 
    }
    printf("\n");
}

//Function for printing the list backwards
void print_backwards(struct node *head){ 
    struct node *cursor; 
    cursor = head; 
    //while loop to make the cursor point at the last element
    while (cursor -> next != NULL){
        cursor = cursor -> next; 
    }
    //while loop for printing the list backwards
    while (cursor != NULL){
        printf("%c ", cursor -> data);
        cursor = cursor -> prev; 
    }

    printf("\n"); 
}

//Function to remove an element from the list
struct node* remove_element(struct node *head, char c){

    int check = 0 ; 

    struct node *cursor, *before, *duplicate, *after; 
    cursor = head; 
    duplicate = head; //creating a duplicate of the struct
   
    //while to move the  cursor through all elements 
    while (cursor != NULL){
        //if condition to check for element
        if(cursor -> data == c){
            check = 1;
            //condition if the element is at the end of the list
            if (cursor -> next == NULL){
                cursor = cursor -> prev; 
                cursor -> next = NULL;
            }
            //condition if the element is at the begining of the list
            else if (cursor -> prev == NULL){
                cursor = cursor -> next; 
                cursor -> prev = NULL;
                head = cursor;
            }
            //condition if the element is in the middle
            else{
                after = cursor -> next; 
                before = cursor -> prev; 
                after -> prev = before; 
                before -> next = after;
            }
        }
        cursor = cursor -> next; 
    }

    if(check == 0){
        printf("The element is not part of the list\n");
        return duplicate;
        //returning the duplicate of the original structure
    }

    else {
        return head;
        //returning the updated structure
    }

}

//Function to empty a list and free memory
void empty_list(struct node *head){
    struct node *cursor;
    cursor = head;
    while(head != NULL){
        cursor = head -> next;
        free(head); 
        head = cursor; 
    }

    while(head != NULL){
        cursor = head -> prev; 
        free(head); 
        head = cursor; 
    }

}

int main (){
    //Declaring variables
    struct node *head = NULL;
    int n; 
    char c;
    
    //endless while loop
    while (1){
        scanf("%d", &n);
        getchar();
        //switch conditions
        switch (n){
            case 1: 
                scanf("%c", &c); 
                getchar();
                head = addtofront(head, c);
                break; 
            
            case 2:
                scanf("%c", &c);
                getchar();
                head = remove_element(head, c);
                break; 

            case 3:
                print_list(head); 
                break; 
            
            case 4:
                print_backwards(head); 
                break; 
            
            case 5:
                empty_list(head); 
                break;
        }

        if(n == 5) {
            break; 
        }
    }

    return 0; 
}