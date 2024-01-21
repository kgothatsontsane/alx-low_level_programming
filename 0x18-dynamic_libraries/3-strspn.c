#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer input
 * @accept: input
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				bytes++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
