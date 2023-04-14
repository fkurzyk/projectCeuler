#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "../fiku.h"

bool divisibleByRange(int, int, long);

#define DIVISOR_RANGE_START 1
#define DIVISOR_RANGE_END 20
#define MIN DIVISOR_RANGE_END
#define MAX 1000000000

void main()
{
	printf("START\n");

	for (long n = MIN; n <= MAX; n = n + DIVISOR_RANGE_END)
	{
		printf("%ld", n);
		if (divisibleByRange(DIVISOR_RANGE_START, DIVISOR_RANGE_END, n))
		{
			printf(" <== found!\n");
			return;
		}
		printf("\n");
	}

	printf("END, MAX reached\n");
}


bool divisibleByRange(int rStart, int rEnd, long n)
{
	for (int i = rEnd; i >= rStart; i--)
	{
		printf(".");
		if (n % i != 0)
		{
			return false;
		}
	}
	return true;
}

