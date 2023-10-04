#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size asize and assign char c
 * @asize: array size
 * @c: char to assign
 * Description: create array of size asize and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int asize, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * asize);
	if (asize == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < asize; i++)
		str[i] = c;
	return (str);
}
