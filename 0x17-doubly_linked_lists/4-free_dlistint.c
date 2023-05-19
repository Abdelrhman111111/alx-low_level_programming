#include "lists.h"

/**
 * free_dlistint - .........
 * @head: ,,,,,,,,,,,
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t, *d;

	if (head == NULL)
		return;

	t = head;
	while (t->prev)
		t = t->prev;
	while (t)
	{
		d = t;
		t = t->next;
		free(d);
	}
}
