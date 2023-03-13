#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - allocate grid
  * @width: input width
  * @height: input height
  *
  * Return: pointer
  */

int **alloc_grid(int width, int height)
{
	int x, y, z, l;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);

		if (p[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(p[y]);
			}

			free(p);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (l = 0; l < width; l++)
		{
			p[z][l] = 0;
		}
	}

	return (p);
}
