#include <stdlib.h>
#include "list.h"
#include <stdio.h>

struct Node* insertAtBeginning(struct Node* head, int reading)    
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = reading;
	newNode->next = head;

	return newNode;
}

void printList(struct Node *head)
{
	for(struct Node* temp = head; temp != NULL; temp = temp->next)
	{
		printf("Reading = %d\n", temp->data);
	}
}
