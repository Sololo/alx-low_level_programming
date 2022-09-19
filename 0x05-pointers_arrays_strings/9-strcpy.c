#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * included the terminating
 * null byte, to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;
		x++;
	}
	return (dest);
}
