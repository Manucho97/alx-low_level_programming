#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings.
 * @n: number of strings passed
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		const char *string = va_arg(args, const char *);

		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (i != n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}
