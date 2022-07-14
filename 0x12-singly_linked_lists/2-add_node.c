#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to list_t
 * @str: new string to add to node
 * Return: address of the new element or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}
