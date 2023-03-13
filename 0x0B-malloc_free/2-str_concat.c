#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenating of two strings.
 * @s1: first input string.
 * @s2: second input string.
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int x, y, u, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for  (y = 0; s2[y] != '\0'; y++)
		;

	s = malloc(sizeof(char) * (x + y + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for  (u = 0; u < x; u++)
		s[u] = s1[u];

	l = y;
	for (y = 0; y <= l; u++, y++)
		s[u] = s2[y];

	return (s);
}
