#include "main.h"
#include <stdlib.h>

/**
* argstostr - argument to string.
* @ac: argument counter
* @av: argument variable
* Return: arguments of concatenated strings
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;

		l++;
	}

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
