#include "3-calc.h"

/**
* main - simple operations
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1
*
*/


int main(int argc, char *argv[])
{
	int num1, num2, result;

	char o;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];
	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
