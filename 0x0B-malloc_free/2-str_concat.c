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
	int i = 0, j = 0, l = 0, k = 0;
	int str1, str2;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	str1 = i;
	str2 = j;

	l = str1 + str2;
	s = (char *) malloc(l * sizeof(char) + 1);

	for (k = 0; k < str1; k++)
	{
		s[k] = s1[k];
	}

	for (k = 0; k < str2; k++)
	{
		s[k + str1] = s2[k];
	}

	s[l] = '\0';

	return (s);
}
