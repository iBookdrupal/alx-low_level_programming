#include <stdio.h>

/**
 * main - print to standard output
 * print lowercase alphabet in reverse 'z' - 'a'
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char alphahex = 'a';
	char numhex = '0';

	while (numhex <= '9')
	{
	putchar(numhex);
	numhex++;
	}

	while (alphahex <= 'f')
	{
		putchar(alphahex);
		alphahex++;
	}



	putchar('\n');

	return (0);
}
