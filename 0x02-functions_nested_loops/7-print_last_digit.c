#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is printed
 * Return: the value of the last digit
 */


int print_last-digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = (n % 10);
		_putchar('0' + i);
		_putchar('\n');
		return (i);
	}
	else 
	{
		i = (-n % 10);
		_putchar('0' + i);
		_putchar('0' + i);
		_putchar('\n');
		return(i);
	}

}
