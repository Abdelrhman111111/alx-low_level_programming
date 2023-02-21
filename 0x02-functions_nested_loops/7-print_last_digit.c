#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int x)

{

	int l;

	l = x % 10;
	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
