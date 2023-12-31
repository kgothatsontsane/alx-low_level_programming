#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates n bytes of two strings
 * @dest: Pointer destination
 * @src: Pointer source
 * @n: Number of bytes
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
		/* Calculate the length of dest */
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Make sure to add a null terminator at the end */
	dest[dest_len + i] = '\0';

	return (dest);
}
