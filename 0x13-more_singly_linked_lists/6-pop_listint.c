#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head: pointer to first element
 * Return: head node's data(n) || 0 for empty return
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (numb);
}
