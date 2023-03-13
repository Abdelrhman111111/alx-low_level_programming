#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copying of a string
 * @str: input string
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int x, l;

	x = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	dup = malloc(sizeof(char) * (l + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[x] = str[x]) != '\0')
		x++;

	return (dup);
}
