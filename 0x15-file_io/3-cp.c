#include "main.h"

/**
 * main - ...................................
 * @argc: .................
 * @argv: .................
 * Return: .................
 */
int main(int argc, char *argv[])
{
	int d, fd, i, n, m;
	char b[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	d = open(argv[1], O_RDONLY);
	if (d < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(d, b, BUFSIZ)) > 0)
	{
		if (fd < 0 || write(fd, b, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(d);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n = close(d);
	m = close(fd);
	if (n < 0 || m < 0)
	{
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
