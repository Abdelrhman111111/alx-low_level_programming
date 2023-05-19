#include "lists.h"

/**
 * add_dnodeint - ...................
 * @head: ....................
 * @n: ................................
 * Return: ................................
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t, *e;

	t = *head;
	e = malloc(sizeof(dlistint_t));
	if (e == NULL)
		return (NULL);

	e->n = n;
	e->prev = NULL;
	if (t == NULL)
		e->next = NULL;
	else
	{
		while (t->prev)
			t = t->prev;

		t->prev = e;
		e->next = t;
	}
	*head = e;

	return (*head);
}
