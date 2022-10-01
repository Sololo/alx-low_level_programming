#include <stdio.h>
#include "main.h"

/**
 * main - print all recieved arguments
 * @argc: numberof arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, y;

	x = 0;
	y = argc;

	while (y >= 0)
	{
		printf("%s\n", argv[x]);
		x++;
		y--;
	}
	
	return (0);
}
