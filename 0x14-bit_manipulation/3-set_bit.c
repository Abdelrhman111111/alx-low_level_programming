#include "main.h"
#include <stdlib.h>

/**
 * set_bit - ........
 * @n: ...................
 * @index:..............
 * Return:..............
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int r, a;

	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
