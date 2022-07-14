#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: destination to get a string to combine
* @src: source to concatenate the string
* @n: number of string
* Return: dest if successful
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && src[j]; j++)
	dest[i++] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
