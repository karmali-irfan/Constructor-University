/**
 * @file queue.c
 CH 230-A 
 Irfan Karmali 
 a8_p3
 i.karmali@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq){
    Node *new; 
    new = (Node*) malloc(sizeof(Node)); 
    if (new == NULL){
        printf("Error allocating memory\n"); 
        return -1; 
    }

    new -> item = item; 
    new -> next = NULL;

   if (pq -> items == 0){
       pq -> rear = new; 
       pq -> front = new;
   }

   else {
       pq -> rear -> next = new;
       pq -> rear = new; 
   }

    pq -> items++ ; 
    return 0; 
}

int dequeue(Item *pitem, Queue *pq)
{
    // Item *wait; 
    // wait = (Item*) malloc(sizeof(Item));
    // if(wait == NULL){
    //        printf("Error in allocating memory\n"); 
    //        return -1; 
    // }
    // *wait = *pitem; 
    pq -> front = pq -> front -> next; 
    pq->items--;
    //free(wait);

    return 0;
}

//Function for printing
//I chose not to use a pointer since I don't want it to to retain its value
void qprint(Queue pq){
    printf("content of the queue: ");
    if(queue_is_empty(&pq) == 0){
        while (pq.front != NULL){
            printf("%d ", pq.front->item); 
            pq.front = pq.front -> next; 
        }
    }
    printf("\n");
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
	dequeue(&dummy, pq);
	}
}