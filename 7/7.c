#include <stdio.h>
#include "../fiku.h"

#define LIMIT 10001

int main()
{
	int count = 0;
	long long int n = 2;
	while (true)
	{
		if (isPrime_lli(n))
		{
			count++;
		}
		if (count == LIMIT)
		{
			printf("result: %lld\n", n);
			break;
		}
		n++;
	}
}
