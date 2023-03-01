#include "main.h"

/**
  * leet - Encoding a string to 1337
  * @s: The string of encoding
  *
  * Return: encoded value
  */
char *leet(char *s)
{
	int x = 0, y = 0, l = 5;
	char u[5] = {'A', 'E', 'O', 'T', 'L'};
	char z[5] = {'4', '3', '0', '7', '1'};

	while (s[x])
	{
		y = 0;

		while (y < l)
		{
			if (s[x] == u[y] || s[x] - 32 == u[y])
			{
				s[x] = z[y];
			}

			y++;
		}

		x++;
	}

	return (s);
}
