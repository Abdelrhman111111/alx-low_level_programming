#include "lists.h"

/**
 * free_listint - ...............
 * @head: .................
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
