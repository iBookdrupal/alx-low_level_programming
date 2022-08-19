#include "main.h"

/**
* clear_bit - set bit to 0
* @index: bit index position
* @n: number bit parameter
*
* Return: void
*/

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
