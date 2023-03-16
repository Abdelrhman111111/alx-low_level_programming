#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - ..................
 * @ptr:..............
 * @old_size: ............
 * @new_size: ...........
 *
 * Return: .........
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *optr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	optr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p1[x] = optr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p1[x] = optr[x];
	}

	free(ptr);
	return (p1);
}
