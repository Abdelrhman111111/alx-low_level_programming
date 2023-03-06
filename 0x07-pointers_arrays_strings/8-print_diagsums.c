#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the Entry point
 * @a: input value
 * @size: input value
 * Return: return 0
 */
void print_diagsums(int *a, int size)
{
	int x, y, sum = 0, summ = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		sum = sum + a[x];

	for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
	summ = summ + a[y];
	printf("%d, %d\n", sum, summ);
}
