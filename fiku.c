#include <stdlib.h>
#include <math.h>
#include <stdio.h>

struct node_i {
	int data;
	struct node_i *next;
};

struct node_lli {
	long long int data;
	struct node_lli *next;
};

void printList_i(struct node_i* head) {
	struct node_i *ptr = head;
	printf("[ ");
	while(ptr != NULL) {
		printf("(%d)",ptr->data);
		ptr = ptr->next;
	}
	printf(" ]\n");
}

struct node_i* createList_i()
{
	struct node_i *head = NULL;
	return head;
}

struct node_i* addToList_i(struct node_i* head, int data)
{
	struct node_i *link = (struct node_i*) malloc(sizeof(struct node_i));
	link->data = data;
	link->next = head;
	head = link;
	return head;
}

void addToList_ptr_i(struct node_i** head, int data)
{
	struct node_i *link = (struct node_i*) malloc(sizeof(struct node_i));
	link->data = data;
	link->next = *head;
	*head = link;
	return;
}

int takeFromList_ptr_i(struct node_i** head)
{
	int value = (*head)->data;
	*head = (*head)->next;
	return value;
}

struct node_i* getFactors_i(int x)
{
	struct node_i *head = NULL;

	for (int i=2; i<x; i++)
	{
		if (x%i == 0)
		{
			struct node_i *link = (struct node_i*) malloc(sizeof(struct node_i));
			link->data = i;
			link->next = head;
			head = link;
		}
	}
	
	return head;
}

struct node_lli* getFactors_lli(long long int x)
{
	struct node_lli *head = NULL;

	for (long long int i=2; i<x; i++)
	{
		if (x%i == 0)
		{
			struct node_lli *link = (struct node_lli*) malloc(sizeof(struct node_lli));
			link->data = i;
			link->next = head;
			head = link;
		}
	}
	
	return head;
}

int reverse_i(int x)
{
	int reversed = 0;

	int nDigits = floor(log10(x)) + 1;
	//printf("nDigits: %d\n", nDigits);

	int tens, digit;
	for (int i = 0; i < nDigits; i++)
	{
		tens = pow(10, nDigits-i-1);
		digit = x/tens;
		x = x - digit*tens;
		reversed = reversed + digit*pow(10, i);
		/*printf("i: %d tens: %d digit: %d x: %d reversed: %d\n",
				i,
				tens,
				digit,
				x,
				reversed);
		*/
	}
	return reversed;
}
