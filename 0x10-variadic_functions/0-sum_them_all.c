#include <stdarg.h>
#include <variadic_functions.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * Return: the sum of all parameters, otherwise if n == 0 return 0
 *
 * @n: the number of parameters passed to the function
 * @...: variadic number of parameters that will be summed
 */
int sum_them_all(const unsigned int n, ...)
{
	va list ap;
	unsigned int i, sum = 0;

	if n == 0
			return (0);

	va_start(ap, n)

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}