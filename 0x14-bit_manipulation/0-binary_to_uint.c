#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint -.............................
 * @b:................
 * Return:.................
 */

unsigned int binary_to_uint(const char *b)
{
	int l, x, a;

	a = 0;

	if (b != NULL)
	{
		for (l = 0 ; b[l] != '\0' ; l++)
		{
			if (b[l] != 48 && b[l] != 49)
			{
				return (0);
			}
		}

		for (x = 0, l-- ; l >= 0 ; l--)
		{
			a = a + ((b[l] - '0') << x);
			x++;
		}
	}
	else
	{
		return (0);
	}
	return (a);
}
