#include "main.h"

/**
  * _memset -  fills memory with a constant byte.
  *
  * @s: pointer to the memory area s
  * @b: byte value for filling the memory
  * @n: bytes of memory to be filled
  *
  * Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	s[count] = b;
	return (s);
}
