#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of list
 * @head: pointer to first element on list
 * @n: data to insert
 * Return: address of new element || NUll for fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *now = *head;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (now->next)
		now = now->next;

	now->next = add;
	return (add);
}

