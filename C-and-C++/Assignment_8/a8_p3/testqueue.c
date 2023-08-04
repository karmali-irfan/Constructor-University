/**
 * @file testqueue.c
  CH 230-A 
 Irfan Karmali 
 a8_p3
 i.karmali@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main() 
{
	Queue line;
	Item temp;
	char ch;
	
	initialize_queue(&line);
	
	while (((ch = getchar()) != EOF) && (ch != 'q'))
	{
		switch (ch)	{
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;

			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					printf("Removing %d from queue\n", line.front -> item);
					dequeue(&temp, &line);
				}
				break;
			//Case 'p' for when p is inserted in the keyboard
				case 'p':
					qprint(line);
					break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, p to print, q to quit:");
		}
	}	
	empty_queue(&line);
	puts("Bye.");
	return 0;
}