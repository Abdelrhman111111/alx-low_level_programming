#include "main.h"

/**
 * print_binary - ................
 * @n: ...........
 * return:............
 */
void print_binary(unsigned long int n)
{
	int x, c = 0;
	unsigned long int curr;

	for (x = 63; x >= 0; x--)
	{
		curr = n >> x;

		if (curr & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
