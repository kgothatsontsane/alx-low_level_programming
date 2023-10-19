#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: double pointer to the head of the list_t
 *
 * @str: string value data member of new node
 *
 *  Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	if (!str)
		return NULL;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free (new);
		return NULL;
	}
	new->len = strlen(str);
	new->next = NULL;


	ptr = *head;
	if (!ptr)
	{
		*head = new;
		return (new);
	}


	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
	free (new);
}
