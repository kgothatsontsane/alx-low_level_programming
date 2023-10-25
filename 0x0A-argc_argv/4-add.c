#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;


	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
