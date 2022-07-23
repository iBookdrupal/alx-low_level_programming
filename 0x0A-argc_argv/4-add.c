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
	int i, j, k, sum = 0;

	if (argc == 0)
		printf("0\n");

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (argv[j][k] > '9' || argv[j][k] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
}

