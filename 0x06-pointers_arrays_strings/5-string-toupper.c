#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert lowercase letters to uppercase in a string.
 * @str: The string to be analyzed and modified.
 *
 * Return: The string with all letters in uppercase.
 *
 * Description:
 * This function takes a string and converts all lowercase letters
 * to uppercase in-place. It iterates through the string and checks
 * each character. If the character is a lowercase letter, it converts
 * it to uppercase by subtracting the ASCII value difference between
 * lowercase and uppercase letters (32).
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
