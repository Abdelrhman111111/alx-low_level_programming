#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - allocates memory by malloc
 * @b: number of bytes.
 *
 * Return: a pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
