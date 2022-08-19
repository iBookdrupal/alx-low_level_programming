#include "main.h"

/**
* flip_bits - flip number
* @m: bit index position
* @n: number bit parameter
*
* Return: number flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, value = 0;
	unsigned long int numb;
	unsigned long int iter = n ^ m;

	i = 63;
	while (i >= 0)
	{
		numb = iter >> i;
		if (numb & 1)
			value++;
		i--;
	}
	return (value);
}
