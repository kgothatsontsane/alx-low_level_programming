#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes the first character of words in a string.
 * @str: The string to be capitalized.
 *
 * Return: The string with words capitalized.
 */
char *cap_string(char *str)
{
	int index = 0; /* Index to traverse the string */
	int is_delimiter = 1; /* Flag for character delimiter check */
	char prev_char = ' '; /* Initialize prev_char with a space */

	char delimiter_chars[] = " \t\n,;.!?\"(){}"; /* Delimiter characters */

	while (str[index] != '\0')
	{
		/* Check if the current character is a lowercase letter */
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (is_delimiter)
			{
				str[index] = str[index] - 32;
				/* Convert to uppercase */
			}
		}

		/**
		 * Check if the current character is one of the
		 * delimiter characters
		 */
		for (int i = 0; i <= 12; i++)
		{
			if (delimiter_chars[i] == prev_char)
			{
				is_delimiter = 1; /* Set delimiter flag */
				break;
			}
			is_delimiter = 0; /* Clear delimiter flag */
		}

		prev_char = str[index];
		/* Store the current character's ASCII code */
		index++;
	}
	return (str);
}
