#include <stdio.h>
#include "main.h"
/**
* main -> printing fibbonacci series
* fib -> display and take in fib number
* Return: always 0
* @n: argument
*/

int fib(int n)
{
	int a = 1, b = 2, c, i;

	if (n == 1)
		return (a);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return (b);
}

int main(void)
{
	int n = 50;

	printf("%d, ", fib(n));
	return (0);
}

