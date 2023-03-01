#include "main.h"

/**
  * _strcmp - Comparison of two strings.
  * @s1: The first string.
  * @s2: The second string.
  *
  * Return: x value
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, x = 0, l;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		l = a;
	}
	else
	{
		l = b;
	}

	while (c <= l)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			x = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (x);
}
