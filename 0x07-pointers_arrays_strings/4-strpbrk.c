#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - the Entry point
 * @s: pointer
 * @accept: char
 * Return: return 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}

	return (NULL);
}
