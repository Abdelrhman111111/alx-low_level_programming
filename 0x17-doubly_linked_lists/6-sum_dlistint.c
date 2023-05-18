#include "lists.h"

/**
 * sum_dlistint - ...........
 * @head:.............
 * Return:.....................
 */
int sum_dlistint(dlistint_t *head)
{
	int s;
	dlistint_t *t;

	t = head;
	for (s = 0; t; t = t->next)
		s += t->n;

	return (s);
}
