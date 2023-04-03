#include "lists.h"

/**
 * add_nodeint - ...........
 * @head: ...............
 * @n: ..........
 * Return: ........
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}

	new_n->n = n;
	new_n->next = (*head);
	(*head) = new_n;

	return (new_n);
}
