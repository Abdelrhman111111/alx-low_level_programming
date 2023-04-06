#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint -...................
  * @b:........................................
  * Return:...............
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0, c = 0, s = 0;

	if (b == NULL)
		return (0);

	l = _strlen(b);
	while (l--)
	{
		if (b[l] != 48 && b[l] != 49)
			return (0);

		if (b[l] == 49)
			s += 1 << c;

		c++;
	}

	return (s);
}

/**
  * _strlen -................
  * @s:.....................
  * Return: ....................
  */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x])
		x++;

	return (x);
}
