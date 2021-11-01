#include "fiku.h"
#include <stdio.h>

int main()
{
	printf("Create list\n");
	struct node_i *head = createList_i();
	printList_i(head);
	printf("Add 1 element to list\n");
	addToList_ptr_i(&head, 42);
	printList_i(head);
	printf("Add 5 elements to list\n");
	for (int n=1; n<=5; n++)
	{
		addToList_ptr_i(&head, n);
	}
	printList_i(head);
	printf("Take 1 element from list\n");
	int el = takeFromList_ptr_i(&head);
	printf("Element taken: %d\n", el);
	printList_i(head);

	/*
	printf("-=-=-= math stuff =-=-=-\n");
	int n = 820;
	head = getFactors_i(n);
	printList_i(head);
	n = 360;
	head = getFactors_i(n);
	printList_i(head);
	*/
}

