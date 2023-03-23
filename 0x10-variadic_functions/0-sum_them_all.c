#include "variadic_functions.h"

/**
 * sum_them_all - ......................
 * @n: ................
 * Return: .................
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int s = 0;
	va_list l;

	va_start(l, n);

	for (x = 0; x < n; x++)
		s += va_arg(l, int);

	va_end(l);

	return (s);
}
