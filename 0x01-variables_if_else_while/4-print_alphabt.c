#include <stdio.h>

/**
 * main - print to standard output
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char my_alphabet = 'a';

	while (my_alphabet <= 'z')
	{
		if (my_alphabet != 'q' && my_alphabet != 'e')
		{
		putchar(my_alphabet);
		}
	my_alphabet++;
	}
	putchar('\n');

	return (0);
}
