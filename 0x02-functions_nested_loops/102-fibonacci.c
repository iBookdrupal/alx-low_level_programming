#include <stdio.h>
#include "main.h"
/**
* main -> printing fibbonacci series
* fib: method for fibbonacci series
* Return: always 0
* @n: argument
*/

int fib(int n)
{
	int a = 0, b = 1, c, i;

	if (n == 0)
		return (a);

	for (i = 2; i <= n; i++)
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

	printf("%d\n", fib(n));
	return (0);
}

