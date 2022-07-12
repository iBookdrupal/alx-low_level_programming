#include <stdio.h>
#include <math.h>
/**
* main - Entry point. printing the maximum prime factors
* Return: Always 0.
*/

int main(void)
{
	long int n;
	long int i;
	long int max_prime;

	n = 612852475143;
	max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2)
		max_prime = n;

	printf("%ld\n", max_prime);

	return (0);
}
