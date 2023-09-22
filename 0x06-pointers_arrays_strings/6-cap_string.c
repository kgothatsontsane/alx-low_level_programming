#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter of words in a string.
 * @str: The string to be analyzed and modified.
 *
 * Return: The string with the first letter of each word capitalized.
 *
 * Description:
 * This function takes a string and capitalizes the first letter of each word.
 * It iterates through the string and checks each character. If the character
 * is a lowercase letter and it's either the first character in the string or
 * it follows a specific set of delimiter characters (space, tab, newline, etc.),
 * it converts it to uppercase.
 */
char *cap_string(char *str)
{
	int index, prev_char, is_delimiter;

	int delimiter_chars[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	index = 0;
	prev_char = 0; // Previous character's ASCII code
	is_delimiter = 1; // Flag to check if the current character is a delimiter

	while (str[index] != '\0')
	{
		// Check if the current character is a lowercase letter
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			// Check if it's the first character or follows a delimiter
			if (index == 0 || is_delimiter)
			{
				str[index] = str[index] - 32; // Convert to uppercase
			}
		}

		// Check if the current character is one of the delimiter characters
		for (int i = 0; i <= 12; i++)
		{
			if (delimiter_chars[i] == prev_char)
			{
				is_delimiter = 1; // Set delimiter flag
				break;
			}
			is_delimiter = 0; // Clear delimiter flag
		}

		prev_char = str[index]; // Store the current character's ASCII code
		index++;
	}
	return (str);
}
