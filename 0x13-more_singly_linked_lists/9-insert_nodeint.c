#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node
 * at a given position
 * @head :first element in list
 * @idx: index for new node
 * @n: data to be inserted
 * Return: pointer to new node || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *now = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; now && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = now->next;
			now->next = new;
			return (new);
		}
		else
			now = now->next;
	}
	return (NULL);
}
