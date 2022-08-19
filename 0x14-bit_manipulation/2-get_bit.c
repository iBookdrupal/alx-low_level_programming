#include "main.h"

/**
* get_bit - binary to decimal
* @n: parameter
*
* Return: void
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	bit_index = (n >> index) & 1;

	return (bit_index);
}
