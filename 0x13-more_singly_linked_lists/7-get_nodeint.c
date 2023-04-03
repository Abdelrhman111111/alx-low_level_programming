#include "lists.h"

/**
 * get_nodeint_at_index - ...........
 * @head: ...................
 * @index: ......................
 * Return: ............
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int c = 0;

	while (tmp && c < index)
	{
		tmp = tmp->next;
		c++;
	}

	return (tmp != NULL ? tmp : NULL);
}
