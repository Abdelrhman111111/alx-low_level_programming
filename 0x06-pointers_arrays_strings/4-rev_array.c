#include "main.h"

/**
 * reverse_array - Reverses the content of an array.
 * @a: The array.
 * @n: elements in the array.
 * return : void.
 */

void reverse_array(int *a, int n)

{

	int t, x;

	for (x = n - 1; x >= n / 2; x--)
	{
	t = a[n - 1 - x];
	a[n - 1 - x] = a[x];
	a[x] = t;
	}

}
