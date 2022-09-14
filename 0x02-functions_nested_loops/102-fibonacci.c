#include <stdio.h>

/**
 * main - Prints the add of the Fibobacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	long int x1, x2, fx;

	x1 = 1;
	x2 = 2;
	printf("%ld, %ld", x1, x2);
	for (x = 0; x < 48; x++)
	{
		fx = x1 + x2;
		printf(", %ld", fx);
		x1 = x2;
		x2 = fx;
	}
	printf("\n");
	return (0);
}
