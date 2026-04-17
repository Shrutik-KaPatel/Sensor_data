#ifndef LIST_H
#define LIST_H

struct Node{
	int data;
	struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head; int reading);

void printList(struct Node *head);

#endif
