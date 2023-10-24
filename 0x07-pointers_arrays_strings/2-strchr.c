#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: input
 * @c: input
 * Return:  first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (&s[count]);
	}
	return (NULL);
}
