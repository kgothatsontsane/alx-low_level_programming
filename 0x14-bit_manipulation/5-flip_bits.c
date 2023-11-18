#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: first value
 * @m: second value
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx, flip = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (idx = 63; idx >= 0; idx--)
	{
		current = exclusive >> idx;
		if (current & 1)
			flip++;
	}

	return (flip);
}
