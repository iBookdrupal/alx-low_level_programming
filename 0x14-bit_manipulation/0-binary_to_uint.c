#include "main.h"

/**
* binary_to_uint - binary to decimal
* @b: pointer parameter
*
* Return: decimal numbers
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i;

	if (!b)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
		i++;
	}

	return (val);
}
