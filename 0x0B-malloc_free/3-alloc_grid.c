#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of intergers
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	x = malloc(height * sizeof(int *));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(width * sizeof(int));
		if (x[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			x[i][j] = 0;

	return (x);
}
