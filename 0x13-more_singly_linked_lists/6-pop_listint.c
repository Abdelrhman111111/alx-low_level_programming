#include "lists.h"

/**
 * pop_listint - .....................
 * @head: ................
 * Return: .............
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
