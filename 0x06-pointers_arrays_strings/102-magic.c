#include <stdio.h>

/**
 *102-magic.c
 *
 * main - prints value of a[2] to be 98
 * This program initializes an array 'a' and a pointer 'p'. It then sets
 * the value of a[2] to 1024, assigns the address of the integer 'n' to
 * pointer 'p', and modifies the value at *(p + 5) to be 98. Finally,
 * it prints the value of a[2] to the standard output.
 * Return: 0
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
