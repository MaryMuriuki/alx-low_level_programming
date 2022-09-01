#include "lists.h"
/**
 * add_dnodeint - adds a node to beginning of a doubly
 * liked list
 * @head: double pointer to list
 * @n: data to be inserted on new node
 * Return: address of ne element || NULL when it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
