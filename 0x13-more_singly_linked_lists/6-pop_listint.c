#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked listt
 * @head: double pointer to the first element in the linked list
 *
 * Return: the head node’s data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeData;

	if (!head || !*head)
		return (0);

	nodeData = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nodeData);
}
