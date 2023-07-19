#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: starting point num
 * Return: 0
 */


void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			_putchar(i);
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			_putchar(i);
			i--;
		}

	_putchar('\n');

	}

}

