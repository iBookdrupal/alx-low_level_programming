#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenating two strings
* @s1: string param 1
* @s2: string param 2
* Return: concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 == " ";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	s = (char *) malloc(l * sizeof(char));
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= j)
		{
			s[k] = s2[j];
			j++;
		}

	}

	s[k] = '\0';
	return (s);

}
