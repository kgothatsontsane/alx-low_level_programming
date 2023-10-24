#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where memory area is stored
 * @src: where memory area is copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int count = n;

	for (r = 0; r < count; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
