#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the linked listint_t list whose number of elements is to be counted.
 *
 * Return: the number of elements in listint_t h
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h->next;
	}

	return (count);
}
