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
	int a = index;

	if (a > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << a);
	return (1);
}
