#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search in.
 * @needle: substring to look for.
 *
 * Return: pointer to the beginning of located substring or
 * Null if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;

	while (*haystack != '\0')
	{
		x = haystack;
		y = needle;

		while (*haystack != '\0' && *y != '\0' && *haystack == *y)
		{
			haystack++;
			y++;
		}
		if (!*y)
			return (x);
		haystack = x + 1;
	}

	return (0);
}
