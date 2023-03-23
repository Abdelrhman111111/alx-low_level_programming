#include "variadic_functions.h"

/**
 * print_numbers - ...........
 * @separator: .............................
 * @n: ...............................................
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list l;

	va_start(l, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(l, int));
		else if (separator && x == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
	}

	va_end(l);

	printf("\n");
}
