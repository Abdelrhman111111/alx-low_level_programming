#include "lists.h"

/**
 * dlistint_len - .................
 * @h: ...................
 * Return: .................
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *t;
	size_t c = 0;

	t = h;
	while (t && t->prev)
		t = t->prev;

	while (t)
	{
		c++;
		t = t->next;
	}
	return (c);
}
