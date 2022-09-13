#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(c[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
