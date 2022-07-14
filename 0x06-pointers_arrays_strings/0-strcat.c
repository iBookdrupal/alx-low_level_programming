#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: destination to get a string to combine
* @src: source to concatenate the string
* Return: 0 always success
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
	dest[i++] = src[j];

	return (dest);
}
