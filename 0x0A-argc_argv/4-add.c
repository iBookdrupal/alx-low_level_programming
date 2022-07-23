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

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
}

