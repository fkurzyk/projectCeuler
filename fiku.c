#include <stdlib.h>

struct node_i {
	int data;
	struct node_i *next;
};

struct node_lli {
	long long int data;
	struct node_lli *next;
};

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

struct node_i* getFactors(int x)
{
	return getFactors_i(x);
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
