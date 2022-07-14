#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to list_t
 * @str: string to be in the new node
 * Return: address of new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = nw;
	return (nw);
}
