#include "lists.h"

/**
 * find_listint_loop - finds the loop in a listint_t  list
 * @head: pointer to listint_t list to search in
 *
 * Return: address of the node where the loop starts, or NULL
 * if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *behind = head;
	listint_t *ahead = head;

	if (!head)
		return (NULL);

	while (behind && fast && ahead->next)
	{
		fast = ahead->next->next;
		behind = behind->next;
		if (ahead == behind)
		{
			behind = head;
			while (behind != ahead)
			{
				behind = behind->next;
				ahead = ahead->next;
			}
			return (ahead);
		}
	}

	return (NULL);
}
