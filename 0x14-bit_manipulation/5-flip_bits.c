#include "main.h"

/**
 * flip_bits - ........................
 * @n: ......................
 * @m: ...............
 * Return: ...........
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, nf = 0;
	unsigned long int y = sizeof(unsigned long int) * 8;

	for (x = 0; x < y; x++)
	{
		if ((m & 1) != (n & 1))
			nf += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nf);
}
