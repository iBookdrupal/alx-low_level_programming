#include <stdio.h>
/**
* _strchr - string character
* @s: string
* @c: pointer to first occurrence
* Return: c for the first occurnce
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
