#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for a simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, or exit with error codes 98 or 99 on failure.
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = (get_op_func(argv[2]));

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
