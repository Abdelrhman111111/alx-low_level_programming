#include "lists.h"

/**
 * add_dnodeint_end - .......................
 * @head: ................
 * @n: .........................
 * Return: ...........
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *w;

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = NULL;
	t = *head;
	while (t && t->next)
		t = t->next;

	if (t)
	{
		w->prev = t;
		t->next = w;
	}
	else
	{
		*head = w;
		w->prev = NULL;
	}

	return (w);
}
