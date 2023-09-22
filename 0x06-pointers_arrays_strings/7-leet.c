#include "main.h"
#include <stdio.h>

/**
 * leet - changes vowels in a string to numbers.
 *
 * @str: The string to be analyzed and modified.
 *
 * Return: The string with vowels replaced by corresponding numbers.
 *
 * Description:
 * This function takes a string and replaces its vowels with numbers based on a
 * predefined mapping. It iterates through the string and checks each element.
 * If the element is a vowel (either lowercase or uppercase), it replaces it
 * with the corresponding number from the mapping.
 */
char *leet(char *str)
{
	char vowels[] = "aeotlAEOTL"; /* Vowels to be replaced */
	char numbers[] = "4307143071"; /* Corresponding numbers */
	int index = 0; /* Index to traverse the string */
	int mapping_index; /* Index to match vowels with numbers */

	while (str[index] != '\0')
	{
		/* Check if the current character is a vowel */
		for (mapping_index = 0; mapping_index <= 9; mapping_index++)
		{
			if (str[index] == vowels[mapping_index])
			{
				str[index] = numbers[mapping_index];
				/* Replace with corresponding number */
				break;
				/* Break the loop once a replacement is made */
			}
		}
		index++; /* Move to the next character */
	}
	return (str);
}
