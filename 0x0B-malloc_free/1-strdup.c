#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string parameter
 * @str: string duplicate
 * Return: pointer to the cloned string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *x;
	unsigned int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	x = (char *)malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (l = 0; l <= i; l++)
		x[l] = str[l];

	return (x);
}
