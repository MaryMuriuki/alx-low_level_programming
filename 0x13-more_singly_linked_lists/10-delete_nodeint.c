#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in linked list at a certain
 * index
 * @head: pointer to 1st elemt on list
 * @index: index to node to delete
 * Return: 1- success, -1 -fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *now = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (j < index - 1)
	{
		if (!new || !(new->next))
			return (-1);
		new = new->next;
		j++;
	}

	now = new->next;
	new->next = now->next;
	free(now);

	return (1);
}
