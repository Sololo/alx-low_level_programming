#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase.
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 97 && x[x] <= 122)
			s[x] = s[x] - 32;
	}

	return (s);
}
