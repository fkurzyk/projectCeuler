#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node* getFactors(long long int x);
bool isPrime(long long int x);

struct node {
	long long int data;
	struct node *next;
};

void printList(struct node* head) {
	struct node *ptr = head;
	printf("\n[ ");
	while(ptr != NULL) {
		printf("(%lld)",ptr->data);
		ptr = ptr->next;
	}
	printf(" ]\n");
}

int main()
{
	long long int n = 600851475143;
	//                BBBMMMTTT000
	//long long int n = 1234567890;

	struct node *head = getFactors(n);
	
	printList(head);

	struct node *ptr = head;
	while(ptr != NULL) {
		if (isPrime(ptr->data))
		{
			printf("\nPrime factor found: %lld\n", ptr->data);
		}
		ptr = ptr->next;
	}
}

struct node* getFactors(long long int x)
{
	struct node *head = NULL;
	
	//printf("\nChecking factors for x=%lld", x);
	
	for (long long int i=2; i<x; i++)
	{
		//  BBBMMMTTT000
		if (i%1000000000 == 0)
		{
			printf(".");
			fflush(stdout);
		}

		if (x%i == 0)
		{
			struct node *link = (struct node*) malloc(sizeof(struct node));
			link->data = i;
			link->next = head;
			head = link;
		}
	}

	return head;
}

bool isPrime(long long int x)
{
	struct node *head = getFactors(x);
	return head == NULL;
}

