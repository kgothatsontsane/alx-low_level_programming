#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 * if malloc fails exit with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *i;


	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
