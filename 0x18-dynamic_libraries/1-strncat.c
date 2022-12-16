#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, x2 = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	while (x2 < n)
	{
		*(dest + x) = *(src + x2);
		if (*(src + x2) == '\0')
			break;
		x++;
		x2++;
	}
	return (dest);
}
