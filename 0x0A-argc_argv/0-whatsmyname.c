#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - print program name
* Return: 0 for success
* @argc: argument count
* @argv: argument vector
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

