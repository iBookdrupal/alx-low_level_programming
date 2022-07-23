#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - adding positive numbers
* Return: 0 or 1 for success
* @argc: argument count
* @argv: argument vector
*/

int main(int argc, char *argv[])
{
	int i, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			i -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
