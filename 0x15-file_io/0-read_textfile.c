#include "main.h"
/**
 * read_textfile -..................
 * @filename: ...................................
 * @letters: .....................
 * Return: ..............................
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int d, x, m;
	char *b;

	if (!filename)
		return (0);
	d = open(filename, O_RDONLY);
	if (d < 0)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);
	x = read(d, b, letters);
	if (x < 0)
	{
		free(b);
		return (0);
	}
	b[x] = '\0';
	close(d);
	m = write(STDOUT_FILENO, b, x);
	if (m < 0)
	{
		free(b);
		return (0);
	}
	free(b);
	return (m);
}
