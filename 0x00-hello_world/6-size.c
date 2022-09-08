#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %ld byte(s)\n", sizeof(d));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unasigned long)sizeof(b));
	printf("Size of a long long int: %llu byte(s)\n", (unasigned long)sizeof(c));
	printf("Size of a float: %zu byte(s)\n", (sizeof(e));
	return (0);
}
