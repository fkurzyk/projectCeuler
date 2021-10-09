#include <stdio.h>

int main()
{
	const int max = 1000;
	int i;
	int total = 0;
	for (i=1; i<max; i++)
	{
		printf("i: %d mod3: %d mod5: %d ", i, i%3, i%5);
		if (i%3 == 0 || i%5 == 0)
		{
			total = total + i;
			printf("YES ");
		}
		printf("%d\n", total);
	}
	printf("Result: %d\n", total);
	return 0;

}

