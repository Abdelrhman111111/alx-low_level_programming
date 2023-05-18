#include "lists.h"

/**
 * get_dnodeint_at_index - ..............
 * @head: ..................
 * @index: ..................................
 * Return: ,,,,,,,,,,,,,,,,,,,
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t;
	unsigned int x;

	t = head;
	for (x = 0; t && x < index; t = t->next, x++)
		;

	return (t);
}
