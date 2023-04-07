#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - ...................
 * @n: ......................
 * @dex:....................
 * Return:.........................
 */

int clear_bit(unsigned long int *n, unsigned int dex)
{
	if (dex > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << dex);
		return (1);
	}
}
