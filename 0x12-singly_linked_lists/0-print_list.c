#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 *
 * @h: pointer to the list_t list that is to be printed
 *
 * Return: the number of nodes (size)
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
