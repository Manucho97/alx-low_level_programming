#include "main.h"

/**
 * more_numbers - print 0- 14 10times
 *
 * Return: 0
 */


void more_numbers(void)

{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n);
	}

}
