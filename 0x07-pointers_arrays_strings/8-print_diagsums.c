#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sum0, sum1;

	sum0 = 0;
	sum1 = 0;

	for (x = 0; x < size; x++)
	{
		sum0 += a[(size * x) + x];
		sum1 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
