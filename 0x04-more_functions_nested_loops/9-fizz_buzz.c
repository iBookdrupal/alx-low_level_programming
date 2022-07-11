#include <stdio.h>
/**
* main -> entry point
* multiple of 3 prints Fizz
* multiple of 5 prints Buzz
* multiple of 3 and 5 prints FizzBuzz
* Return: return 0 always
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf(" Fizz");
		if (i % 5 == 0)
			printf(" Buzz");
		if ((i % 3) && (i % 5) == 0)
			printf(" FizzBuzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
