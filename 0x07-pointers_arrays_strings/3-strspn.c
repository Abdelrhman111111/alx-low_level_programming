#include "main.h"

/**
 * _strspn -the Entry point
 * @s: pointer
 * @accept: accepted value
 * Return: return 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, u, i;

	u = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		i = 0;

		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				u++;
				i = 1;
			}
		}

		if (i == 0)
			return (u);
	}

	return (u);
}
