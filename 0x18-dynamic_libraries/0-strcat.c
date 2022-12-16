#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, x2 = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	while (x2 >= 0)
	{
		*(dest + x) = *(src + x2);
		if (*(src + x2) == '\0')
			break;
		x++;
		x2++;
	}
	return (dest);
}
