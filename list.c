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

struct Node* insertAtEnd(struct Node* head, int reading)
{
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = reading;
	newNode->next = NULL;
	
	if (head == NULL)
		return newNode;
	
	struct Node* temp = head;

   	 while (temp->next != NULL)
    	{
        	temp = temp->next;
    	}

   	temp->next = newNode;
	return head;

}

struct Node* insertAtPosition(struct Node* head, int reading, int pos)
{
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = reading;
	
	if(pos == 0)
	{
		newNode->next = head;
		return newNode;

	}

	struct Node* temp = head;
	
	for(int i = 0; i < pos-1; i++)
	{
		temp = temp->next;
	}
	
	newNode->next = temp->next;
	temp->next = newNode;
	return head;

}


void printList(struct Node *head)
{
	for(struct Node* temp = head; temp != NULL; temp = temp->next)
	{
		printf("Reading = %d\n", temp->data);
	}
}
