#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies at most n bytes of a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
