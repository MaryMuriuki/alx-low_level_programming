#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
