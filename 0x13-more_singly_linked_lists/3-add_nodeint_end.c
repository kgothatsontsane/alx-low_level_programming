#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the double pointer to the head of the listint_t list
 * @n: the int value that is to be added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	ptr = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = new;

	return (new);
}
