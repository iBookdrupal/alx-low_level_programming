#include "main.h"
/**
* print_last_digit -> prints the last digit
* @last: returns the last digit
* Return: 0 always
*
*/

int print_last_digit(int last)
{
	int n;

	if (last < 0)
		last = -last;
	n = last % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
