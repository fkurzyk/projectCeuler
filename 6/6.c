#include <stdio.h>

long squareOfSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum*sum;
}

long sumOfSquares(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i*i;
	}
	return sum;
}

int main()
{
	int n = 100;
	long square = squareOfSum(n);
	long sum = sumOfSquares(n);
	printf("square of sum: %ld\n", square);
	printf("sum of squares: %ld\n", sum);
	printf("diff: %ld\n", square - sum);
}
