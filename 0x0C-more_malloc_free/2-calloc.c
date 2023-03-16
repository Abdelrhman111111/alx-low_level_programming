#include <stdlib.h>
#include "main.h"
/**
 *_calloc - .............
 *@nmemb:.............
 *@size:............
 *Return:..........
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int s, x;
	void *po;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = nmemb * size;
	po = malloc(s);
	if (po == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < s; x++)
	{
		*((char *)(po) + x) = 0;
	}
	return (po);
}
