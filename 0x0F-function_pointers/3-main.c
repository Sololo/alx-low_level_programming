#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*opn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	opn = get_op_func(argv[2]);


	if (opn == NULL && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%\n", opn(a, b));
	return (0);
}
