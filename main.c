#include <stdio.h>
#include "list.h"

int main()
{
	struct Node* head = NULL;
	head = insertAtBeginning(head,10); 
	head = insertAtBeginning(head,20);

	printList(head);
	
	return 0;
}
