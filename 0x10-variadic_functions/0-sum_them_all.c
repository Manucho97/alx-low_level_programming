#include "variadic_functions.h"
/**
 * sum_them_all - adds all its arguments
 * @n: number of arguments
 * return: 0 if n == 0, sum of all elements
 */


int sum_them_all(unsigned int n, ...)
{
	unsigned int x = 0;
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		if (n == 0)
		return 0;
		 x = x + va_arg(args, unsigned int);

	}
	return x;
}
