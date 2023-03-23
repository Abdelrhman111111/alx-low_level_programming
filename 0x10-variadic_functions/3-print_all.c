#include "variadic_functions.h"

/**
 * print_all - ..................
 * @format: .......................
 * Return: .............
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *s = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					x++;
					continue;
			}
			s = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(l);
}
