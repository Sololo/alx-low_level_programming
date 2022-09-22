#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * of intergers.
 * @a: array.
 * @n: number of elements in the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			z = *(x + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = z;
		}
	}
}
