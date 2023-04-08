#include "main.h"

/**
 * create_file - .............
 * @filename: ....................
 * @text_content: ...................
 * Return: ...............
 */
int create_file(const char *filename, char *text_content)
{
	int d, i, m = 0;

	if (!filename)
		return (-1);

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (d < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[m])
			m++;
		i = write(d, text_content, m);
		if (i != m)
			return (-1);
	}

	close(d);

	return (1);
}
