#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - ............
 * @s1: .......
 * @s2: .....................
 * @n: .............
 *
 * Return: .....................
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x = 0, y = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		c = malloc(sizeof(char) * (l1 + n + 1));
	else
		c = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!c)
		return (NULL);

	while (x < l1)
	{
		c[x] = s1[x];
		x++;
	}

	while (n < l2 && x < (l1 + n))
		c[x++] = s2[y++];

	while (n >= l2 && x < (l1 + l2))
		c[x++] = s2[y++];

	c[x] = '\0';

	return (c);
}
