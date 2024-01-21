#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string for comparison.
 *
 * Return: 0 if strings are equal, otherwise the difference.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
