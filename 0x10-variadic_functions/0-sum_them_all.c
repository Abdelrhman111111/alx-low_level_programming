#include "variadic_functions.h"

/**
  * sum_them_all - ...........
  * @n: .......
  * Return: ......
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list argues;
	unsigned int x = 0;
	int s = 0;

	if (n != 0)
	{
		va_start(argues, n);

		while (x < n)
		{
			s += va_arg(argues, int);
			x++;
		}

		va_end(argues);
		return (s);
	}

	return (0);
}
