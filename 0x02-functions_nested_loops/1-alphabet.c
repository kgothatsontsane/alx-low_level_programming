#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: None
 */

void print_alphabet(void)
{
        char myAlphabet = 'a';
        char newLine = '\n';

        while (myAlphabet <= 'z')
        {
                _putchar(myAlphabet);
                myAlphabet++;

        }
        _putchar(newLine);


}
