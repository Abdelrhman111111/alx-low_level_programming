#include <stdlib.h>
#include "main.h"
/**
 * *array_range - makes an array of integers
 * @min: min range of values.
 * @max: max range of values.
 *
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int r, x;
	int *po;

	r = 0;

	if (min > max)
		return (NULL);

	r = ((max + 1) - min);

	po = malloc(r * sizeof(int));

	if (po == NULL)
		return (NULL);

	for (x = 0; x < r; x++)
	{
		*(po + x) = min + x;
	}

	return (po);
}
