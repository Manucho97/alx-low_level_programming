#include "main.h"
#include <stdio.h>

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
			printf("%d", i);
			if (n ! = 98)
			{
				printf(", ");
			}

			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
			i--;
		}

	_putchar('\n');

	}

}

