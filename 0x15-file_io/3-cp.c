#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return: none
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_f, file_t, err_c;
	ssize_t x, y;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_f file_t");
		exit(97);
	}

	file_f = open(argv[1], O_RDONLY);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_f, file_t, argv);

	x = 1024;
	while (x == 1024)
	{
		x = read(file_f, buf, 1024);
		if (x == -1)
			error_file(-1, 0, argv);
		y = write(file_to, buf, x);
		if (y == -1)
			error_file(0, -1, argv);
	}

	err_c = close(file_f);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}

	err_c = close(file_to);
	if (err_c == -1)
	{
		dprint(STDERR_FILENO, "Error: Cant close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}
