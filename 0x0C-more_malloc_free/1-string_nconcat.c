#include "main.h"
#include <stdlib.h>

/**
* _strlen - string length
* @s: string parameter
* Return: length of string in integer
*/

int _strlen(char *s)
{
	int i;

	i = 0;
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
	unsigned int num, i, j, len;
	char *ptr;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < num)
	{
		ptr[i + j] = s2[j];
		j++;
	}

	ptr[i + j] = '\0';

	return (ptr);
}
