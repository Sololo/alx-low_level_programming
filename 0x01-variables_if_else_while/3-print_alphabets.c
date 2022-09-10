#include <stdio.h>

/**
 * main - Prints the a;phabet.
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alph[x]);
	}
	putchar('\n');
	return (0);
}
