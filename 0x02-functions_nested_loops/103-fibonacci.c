#include <stdio.h>
/**
* main -> printing fibbonacci series
* Return: always 0
* sum -> checking and adding sum of fib
* fib -> fibbonacci method
* @n: argument
*/

int fib(int n)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= n; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (k);
}

int sum(int n);
int fib(int n);


int main(void)
{
	int i = 2;

	printf("%ld\n", sum(i));




	return (0);
}



int sum(int n)
{

int N = 4000000;
	int sum = 0;

	while (fib(n) < N)
	{

		if (fib(n) % 2 == 0)
		{

			sum += fib(n);
		}

		n++;
	}

	return (sum);
}
