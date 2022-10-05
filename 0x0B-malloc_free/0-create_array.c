#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array pf characters
 * @size: size of array
 * @c: storage char
 * Return: pointer to an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(c) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}
