#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int x = 0, sz = 0, y = 0, z 1, a = 1, i;

	while (*(s + x) != '\0')
	{
		if (sz > 0 && (*(s + x) < '0' || *(s + x) > '9'))
			break;

		if (*(s + x) == '-')
			z *= -1;

		if ((*(s + x) >= '0') && (*(s + x) <= '9'))
		{
			if (sz > 0)
				a *= 10;
			sz++;
		}
		x++
	}

	for (i = x - size; i < count; i++)
	{
		y = y + ((*(s + i) - 48) * a);
		a /= 10;
	}
	return (y * z);
}
