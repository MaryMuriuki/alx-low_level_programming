#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in list
 * @head: pointer to list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
