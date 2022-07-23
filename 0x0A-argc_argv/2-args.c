#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - print program argument count
* Return: 0 or 1 for success
* @argc: argument count
* @argv: argument vector
*/

int main(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

