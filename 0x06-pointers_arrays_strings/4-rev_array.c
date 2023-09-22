#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Description:
 * This function takes an array of integers and reverses the order
 * of its elements in place. It uses a two-pointer approach to swap
 * elements from the beginning and end of the array until they meet
 * in the middle.
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		swap = a[begin];
		a[begin] = a[end];
		a[end] = swap;

		begin++;
		end--;
	}
}
