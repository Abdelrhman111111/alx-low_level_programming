#include "main.h"
#include <stdlib.h>

/**
  * create_array - array of char.
  * @size: array size
  * @c: char 
  *
  * Return: pointer
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x; 
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		ch[x] = c;
	}

	return (ch);
}
