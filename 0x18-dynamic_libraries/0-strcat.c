#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the resulting concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (start);
}
