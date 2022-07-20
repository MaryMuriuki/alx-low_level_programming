#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n) on list
 * @head: first element on list
 * Return: sum || 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new = head;

	while (new)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
