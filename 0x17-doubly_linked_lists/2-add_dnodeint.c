#include "lists.h"

/**
 * add_dnodeint - ............
 * @head: .............
 * @n: .................
 * Return: .................
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t, *nu;

	t = *head;
	nu = malloc(sizeof(dlistint_t));
	if (nu == NULL)
		return (NULL);

	nu->n = n;
	nu->prev = NULL;
	if (t == NULL)
		nu->next = NULL;
	else
	{
		while (t->prev)
			t = t->prev;

		t->prev = nu;
		nu->next = t;
	}
	*head = nu;

	return (*head);
}
