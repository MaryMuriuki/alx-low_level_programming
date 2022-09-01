#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node on list
 * @head: pointer to lis
 * @index: index of node
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
