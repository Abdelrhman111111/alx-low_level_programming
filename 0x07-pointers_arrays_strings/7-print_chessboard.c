#include "main.h"

/**
 * print_chessboard -the Entry point
 * @a: pointer of array
 * Return: return 0
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
