#include "main.h"
#include <stdlib.h>

/**
* _strlen - string length
* @s: string parameter
* Return: length of string in integer
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}




/**
* string_nconcat - string concatenation
* @s1: string param 1
* @s2: string param 2
* @n: number of bytes
* Return: newly allocated memory space
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (len < 0)
		return (NULL);

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
