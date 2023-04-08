#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -..................
 * @filename: ...................................
 * @letters: .....................
 * Return: ..............................
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t d, m, y;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	d = open(filename, O_RDONLY);
	m = read(d, b, letters);
	y = write(STDOUT_FILENO, b, m);

	if (d == -1 || r == -1 || y == -1 || y != r)
	{
		free(b);
		return (0);
	}

	free(b);
	close(d);

	return (y);
}
