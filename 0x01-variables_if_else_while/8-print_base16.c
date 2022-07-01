#include <stdio.h>

/**
 * main - print to standard output
 * print lowercase alphabet in reverse 'z' - 'a'
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char alphahex = 'A';
	char numhex = '0';


	while (alphahex >= 'F')
	{
		putchar(alphahex);
		alphahex++;
	}

	while (numhex <= '9')
	{
	putchar(numhex);
	numhex++;
	}

	putchar('\n');

	return (0);
}
