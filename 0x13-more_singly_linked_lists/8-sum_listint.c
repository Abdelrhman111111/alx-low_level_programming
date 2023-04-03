#include "lists.h"

/**
 * sum_listint -..............
 * @head: .......
 * Return: .............
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
