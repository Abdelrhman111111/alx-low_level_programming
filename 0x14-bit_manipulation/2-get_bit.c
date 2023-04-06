#include "main.h"

/**
 * get_bit - .......................
 * @n: ...............................
 * @index: .............
 * Return: ....
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index > 32)
	return (-1);
	return (b & 1);
}
