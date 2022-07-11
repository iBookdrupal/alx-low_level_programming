#include <stdio.h>
/**
* main: entry point 
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
			printf("Fizz \n");
		if (i % 5 == 0)
			printf("Buzz \n");
		if ((i % 3) && (i % 5) == 0)
			printf("FizzBuzz \n");
		else
			printf("%d\n", i);
		}

	return (0);
}
