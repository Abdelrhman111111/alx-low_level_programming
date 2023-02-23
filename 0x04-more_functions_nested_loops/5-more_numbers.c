#include "main.h"


/**
 * more_numbers - Print numbers from 0 to 14 for 10 times every set in new line
 * Return: 10 times of the numbers from 0 up to 14
 */

void more_numbers(void)

{

	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	}
	_putchar('\n');
	}
}
