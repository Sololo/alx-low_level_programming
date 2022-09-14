#include "main.h"

/**
 * print_last_digit - Prints the last of a number.
 *
 * @l: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int l)
{
	int k;

	k = l % 10;

	if (k < 0)
	{
		_putchar(-k + 48);
		return (-k);
	}
	else
	{
		_putchar(k + 48);
		return (k);
	}
}
