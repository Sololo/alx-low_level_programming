#include "main.h"
#include <stdlib.h>

/**
 * array_range - creayes an array of intergers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(*x) * ((max - min) + 1));

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i ++, min++)
		x[i] = min;

	return (x);
}
