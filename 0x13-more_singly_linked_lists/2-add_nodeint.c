#include "lists.h"
/**
 * add_nodeint - func that adds new node at the begining
 * of listint_t
 * @head: pointer to the first node on list
 * @n: to ne inserted to node
 * Return: address of new element || NULL for fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
