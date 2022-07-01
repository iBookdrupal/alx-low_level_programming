#include <stdio.h>

/**
 * main - print to standard output
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}


	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');

	return (0);
}
