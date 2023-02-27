#include <stdio.h>

/**
 * swap_int - Swaps the values of 2 integers.
 * @a: The first value to be swapped.
 * @b: The second value to be swapped.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int box = *a;
	*a = *b;
	*b = box;
}
