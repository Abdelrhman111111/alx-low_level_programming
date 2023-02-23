#include "main.h"

/**
 * print_square -  makes blocks of digits square (0 through 9).
 * @size: size -  Variable
 * Return: return 0.
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
