#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node on linked list
 * @head: number 1 element on list
 * @index: index of the node starting with 0
 * Return: pointer to node index || 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *new = head;

	while (new && a < index)
	{
		new = new->next;
		a++;
	}
	return (new ? new : NULL);
}
