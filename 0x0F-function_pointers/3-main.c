#include "3-calc.h"

/**
 * main - .................
 * @argc: ...........
 * @argv: ........
 * Return: .........
 */
int main(int argc, char *argv[])
{
	int x, y, r;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = func(x, y);

	printf("%d\n", r);

	return (0);
}
