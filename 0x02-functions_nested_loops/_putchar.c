#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @p: The character to print
 *
 * Return: On success 1.
 * If an error is encountered, the int -1 is returned, and the error number is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

