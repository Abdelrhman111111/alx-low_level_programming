#include "lists.h"

/**
 * print_dlistint - .................
 * @h: ...........................
 * Return:............................
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *t;
	size_t c = 0;

	t = h;
	while (t && t->prev)
		t = t->prev;

	while (t)
	{
		printf("%d\n", t->n);
		c++;
		t = t->next;
	}
	return (count);
}
