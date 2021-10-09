#include <stdio.h>

int fib(int n);

int main()
{
	for (int i = 1; i<10; i++)
	{
		printf("%d: %d\n", i, fib(i));
	}

	int i = 1;
	int total = 0;
	int c = 0;
	while (c < 4000000)
	{
		c = fib(i);
		if (c%2 == 0)
		{
			total = total + c;
		}
		printf("i: %d c: %d total: %d\n", i, c, total);
		i++;
	}

	printf("Final result: %d\n", total); 
}

int fib(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 2;
	return fib(n-2) + fib(n-1);
}
