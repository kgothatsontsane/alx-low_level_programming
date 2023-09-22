#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the resulting concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Calculate the length of src */
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	/* Copy src to the end of dest */
	for (int i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add the null terminator to the end of the concatenated string */
	dest[dest_len + src_len] = '\0';

	return (dest);
}
