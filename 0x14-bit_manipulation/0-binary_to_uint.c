#include "main.h"

/**
* binary_to_uint - binary to decimal
* @b: pointer parameter
*
* Return: decimal numbers
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int j;
	unsigned int len;

	while (b[len] != '\0')
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		if (b[j] == '1')
		{
			i += k;
		}
		k *= 2;
	}

	return (i);
}
