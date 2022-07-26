#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup - create a newly allocated space
* @str: new string
* Return: duplicate of string str
*/
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	p = (char *) malloc(i * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';

	return (p);
}
