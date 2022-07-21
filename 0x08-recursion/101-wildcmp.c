#include "main.h"

int primeno(int num, int i);

/**
* wildcmp - palidrome
* @s1: character string
* @s2: special character
* Return: number
*/


int wildcmp(char *s1, char *s2)
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

