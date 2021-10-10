#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "../fiku.h"

bool isPalindrome(int);
//int reverse_i(int);
void printList(struct node_i* head) {
	struct node_i *ptr = head;
	printf("\n[ ");
	while(ptr != NULL) {
		printf("(%d)",ptr->data);
		ptr = ptr->next;
	}
	printf(" ]\n");
}

int main()
{
	int latestMax = 0;
	for (int n = 999; n >= 100; n--)
	{
		for (int m = 999; m >= 100; m--)
		{
			if (isPalindrome(n*m))
			{
				printf("we have a palindrome: %d * %d = %d\n", n, m, n*m);
				latestMax = (n*m > latestMax) ? n*m : latestMax;
			}
		}
	}
	printf("Final result: %d\n", latestMax);


	//printf("Hello world!\n");
	//int x = 121;
	//printf("Is %d a palindrome? %d\n", x, isPalindrome(x));

	//struct node_i *head = getFactors(x);
	//printList(head);
}

bool isPalindrome(int x)
{
	int r = reverse_i(x);
	//printf("comparison result: %d\n", x == r);
	return x == r;
}

