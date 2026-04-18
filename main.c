#include <stdio.h>
#include "list.h"

int main()
{
	struct Node* head = NULL;
	head = insertAtBeginning(head,10); 
	head = insertAtBeginning(head,20);
	head = insertAtEnd(head, 30);
	head = insertAtEnd(head, 40);
	printList(head);
	
	return 0;
}
