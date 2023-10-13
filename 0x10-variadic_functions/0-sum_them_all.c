#include "variadic_functions.h"
#include <stdarg.h>
<<<<<<< HEAD
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 *
 * Return: 0 If n == 0 - 0. Else - sum of all parameters.
 *
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
=======
/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
>>>>>>> refs/remotes/origin/master
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

<<<<<<< HEAD
	if n == 0
			return (0);
=======
>>>>>>> refs/remotes/origin/master
	va_start(ap, n)

		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
