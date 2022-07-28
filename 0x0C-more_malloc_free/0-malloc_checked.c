#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function to allocate memory using malloc
* @b: parameter for memory allocation
* Return: void on success
*/


void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}


