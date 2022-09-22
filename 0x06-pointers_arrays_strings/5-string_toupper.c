#include

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase.
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) >= 97 && *(s + x) <= 122)
			*(s + x) = *(s + x) - 32;
		x++
	}

	return (s);
}
