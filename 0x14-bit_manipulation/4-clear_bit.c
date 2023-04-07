#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - ....................
 * @n:.......................
 * @intdex: ...............
 * Return:.....................
 */

int clear_bit(unsigned long int *n, unsigned intdex)
{	

	if (intdex > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << intdex);
	return (1);
}
