#include "main.h"

/**
 * append_text_to_file - ...............
 * @filename: ...........................
 * @text_content: ................
 * Return: ....................
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, i, m = 0;

	if (!filename)
		return (-1);

	d = open(filename, O_WRONLY | O_APPEND);
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
