#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @seaparator:string peinted between numbers
 * @n: number of intergers to be printed
 * Return: nothing
 */



void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		if (n == 0)
		{
			printf("");
		}


		x = va_arg(args, int);

		if (separator == 0)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d", x);
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}