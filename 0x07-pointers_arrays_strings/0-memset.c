#include "main.h"

/**
 * _memset - Entary point.
 * @s: destination.
 * @b: constant bytes.
 * @n: byte.
 * Return: retuen 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
