#include "variadic_functions.h"

/**
 * sum_them_all - sum of variadic variable
 * @n:const
 * Return:int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	double sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
		sum += va_arg(arg, int);
	va_end(list);

	return (sum);

}
