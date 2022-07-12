#include "main.h"
/**
* print_number - print integers
* @n: parameter to accept integers
*/


void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 / 10) + '0');

}
