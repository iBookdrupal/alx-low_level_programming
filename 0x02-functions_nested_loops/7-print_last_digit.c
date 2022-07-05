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
	_putchar('0' + n);
	return (n);
}
