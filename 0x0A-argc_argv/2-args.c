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
	

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	
	return (0);
}
