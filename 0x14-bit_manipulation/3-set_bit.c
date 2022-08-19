#include "main.h"

/**
* set_bit - binary to decimal
* @index: bit index position
* @n: number bit parameter
*
* Return: void
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
