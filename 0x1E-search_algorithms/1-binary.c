#include "search_algos.h"

/**
 * recursive_search - .....................
 * 
 * @array:..........
 * @size: .................
 * @value: ...................
 * Return: ...............
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t h = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (h && size % 2 == 0)
		h--;

	if (value == array[h])
		return ((int)h);

	if (value < array[h])
		return (recursive_search(array, h, value));

	h++;

	return (recursive_search(array + h, size - h, value) + h);
}

/**
 * binary_search - ....................
 *
 *
 * @array: ....................
 * @size: ...............
 * @value: .....................
 * Return: .....................
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
