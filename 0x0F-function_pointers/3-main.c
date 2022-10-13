#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y, result;
	char i;
	int (*opn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	
	if (!opn)
	{
		printf("Error\n");
		exit(99);
	}

	i = *argv[2];


	if ((i == '/' || o == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	result = opn(x, y);
	
	printf("%d\n", result);
	
	return (0);
}
