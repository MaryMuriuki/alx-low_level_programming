#include "lists.h"
/**
 * listint_len - returns the number of elements in linked list
 * listint_t
 * @h: linked list, listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
