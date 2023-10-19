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

	ptr = &head;
	new = malloc(sizeof(list_)t);

	new->data = strdup(str);
	new->len = strlen(str);
	new->link = NULL;

	while (ptr->link != NULL)
		ptr = ptr->link;

	ptr->link = new;

	free(new);
}
