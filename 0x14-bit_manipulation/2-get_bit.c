#include "main.h"

/**
* get_bit - binary to decimal
* @index: bit index position
* @n: number bit parameter
*
* Return: void
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	if (index > 63)
		return (-1);

	bit_index = (n >> index) & 1;

	return (bit_index);
}
