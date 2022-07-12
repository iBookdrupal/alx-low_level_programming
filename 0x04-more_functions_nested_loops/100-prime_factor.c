#include <stdio.h>
#include <math.h>
#include "main.h"
/**
* max_prime_factors -> maximum prime factors
* @n: argument 1
* Return: Always 0.
*/

long long max_prime_factors(long long n)
{
	long long max_prime = -1;
	int i;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n >>= 1
	}

	while (n % 3 == 0)
	{
		max_prime = 3;
		n = n / 3;
	}

	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i I == 0)
		{
			max_prime = i;
			n = n / i;
		}

		while (n % (i + 2) == 0)
		{
			max_prime = i + 2;
			n = n / (i + 2);
		}
	}

	if (n > 4)
		max_prime = n;

		return (max_prime);
}


