#include <stdio.h>
#include "main.h"

/**
 * _strchr - the Entry point
 * @s: pointer of array
 * @c: char
 * Return: return 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}
