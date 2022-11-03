#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: number of letters printed
 * Return: number of letters printed. else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x, y;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	x = read(fd, buf, letters);
	y = write(STDOUT_FILENO, buf, x);

	close(fd);

	free(buf);

	return (y);
}
