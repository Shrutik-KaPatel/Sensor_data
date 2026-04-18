#ifndef LIST_H
#define LIST_H

struct Node{
	int data;
	struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int reading);

struct Node* insertAtPosition(struct Node* head, int reading, int pos);

struct Node* deleteAtPosition(struct Node* head, int pos);

void printList(struct Node *head);

struct Node* insertAtEnd(struct Node* head, int reading);
#endif
