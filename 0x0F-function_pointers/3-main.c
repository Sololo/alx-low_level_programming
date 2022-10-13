#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y, result;
	char i;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	
	func = get_op_func(argv[2]);
	
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	i = *argv[2];

	if ((i == '/' || i == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	result = func(x, y);
	
	printf("%d\n", result);
	
	return (0);
}
