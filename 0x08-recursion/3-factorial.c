#include "main.h"
/**
* factorial - factorial of a number
* @n: factorial num
* Return: string
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	_putchar('\n');
}
