#inlcude "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: the list_t whose elements will be returned
 *
 * Return: number of elements in the list_t h
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
