#include "lists.h"

/**
 * add_dnodeint_end - ...............
 * @head: .........................
 * @n: ..........................................
 * Return: ...................
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *e;

	e = malloc(sizeof(dlistint_t));
	if (e == NULL)
		return (NULL);

	e->n = n;
	e->next = NULL;
	t = *head;
	while (t && t->next)
		t = t->next;

	if (t)
	{
		e->prev = t;
		t->next = e;
	}
	else
	{
		*head = e;
		e->prev = NULL;
	}

	return (e);
}
