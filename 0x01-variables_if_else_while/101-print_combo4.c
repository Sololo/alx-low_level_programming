#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, e, g;

	c = 48;
	e = 48;
	g = 48;
	while (e < 58)
	{
		c = 48;
		while (c < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (e != c && e != g && c != g && e < c && c < g)
				{
					putchar(e);
					putchar(c);
					putchar(g);
					if (c == 56 && e == 55 && g == 57)
					{
						break;
					}

					putchar(',');
					putchar(' ');
				}
				g++;
			}
			c++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
