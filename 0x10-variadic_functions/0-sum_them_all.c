#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 *
 * Return: 0 If n == 0 - 0. Else - sum of all parameters.
 *
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n)

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
