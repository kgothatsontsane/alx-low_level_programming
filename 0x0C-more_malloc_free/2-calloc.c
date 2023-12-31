#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory
 *
 * @nmemb: mumber of elements in array
 * @size: he size of the memory to allocate
 *
 * Return: pointer to the allocated memory
 * if nmemb or size = 0, then return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;


	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
