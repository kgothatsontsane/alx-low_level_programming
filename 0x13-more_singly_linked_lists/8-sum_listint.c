#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node in the listint_t list
 *
 * Return: the sum of all the data (n) of all nodes or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sumOfNodesOfNodes = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumOfNodes += temp->n;
		temp = temp->next;
	}

	return (sumOfNodes);
}
