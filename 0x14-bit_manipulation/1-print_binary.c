#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int to print in binary
 */
void print_binary(unsigned long int n)
{
	int idx, count = 0;
	unsigned long int current;

	for (idx = 63; idx >= 0; idx--)
	{
		current = n >> idx;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
