#include "main.h"

/**
 * rev_string - Reverses a character array in place.
 * @str: The string to be reversed.
 * Return: 0
 * This function takes a character array and reverses it in place.
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
