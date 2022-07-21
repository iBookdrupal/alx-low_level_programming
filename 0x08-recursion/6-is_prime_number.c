#include "main.h"

int primeno(int num, int i);

/**
* is_prime_number - prime number of natural numbers
* @n: prime numbers
* Return: prime number
*/


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
		return (primeno(n, n - 1));
}




/**
* primeno - prime number function
* @i: prime numbers iterator
* @num: prime number
* Return: prime number
*/

int primeno(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (num % i == 0 && i > 0)
		{
			return (0);
		}
		else
		{
			return (primeno(num, i - 1));
		}
	}
}

