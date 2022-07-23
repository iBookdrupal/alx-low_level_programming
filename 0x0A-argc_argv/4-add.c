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
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

		return (0);
}

