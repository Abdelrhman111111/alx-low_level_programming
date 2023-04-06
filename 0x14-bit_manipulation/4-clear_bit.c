#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - ....................
 * @n:.......................
 * @index: ...............
 * Return:.....................
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int r, a;

	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
