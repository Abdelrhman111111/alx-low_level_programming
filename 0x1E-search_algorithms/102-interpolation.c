#include "search_algos.h"

/**
 * interpolation_search - ....................
 * .....................
 *
 * @array: ....................
 * @size: ......................
 * @value: ....................
 * Return:.............
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, l, h;
	double e;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		e = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		p = (size_t)(l + e);
		printf("Value checked array[%d]", (int)p);

		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[p]);
		}

		if (array[p] == value)
			return ((int)p);

		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;

		
			break;
	}

	return (-1);
}
