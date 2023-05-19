#include "lists.h"

/**
 * delete_dnodeint_at_index - ...........
 * @head:.......................
 * @index: .........................
 * Return:......................
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *he;
	dlistint_t *hea;
	unsigned int x;

	he = *head;

	if (he != NULL)
		while (he->prev != NULL)
			he = he->prev;

	x = 0;

	while (he != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = he->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hea->next = he->next;

				if (he->next != NULL)
					he->next->prev = hea;
			}

			free(he);
			return (1);
		}
		hea = he;
		he = hea->next;
		x++;
	}

	return (-1);
}
