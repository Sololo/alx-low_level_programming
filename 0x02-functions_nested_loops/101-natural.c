#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 and are multiples of 3
 *
 * Return: 0 (Always).
 */
int main(void)
{
	int x, y;
	
	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x;
	}
	printf("%d\n", y);
	return (0);
}
