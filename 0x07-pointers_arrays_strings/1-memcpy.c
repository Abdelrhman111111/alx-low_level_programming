#include "main.h"

/**
 * _memcpy - the Entry point
 * @dest: destination value
 * @src: source value
 * @n: value
 * Return: return 0 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
