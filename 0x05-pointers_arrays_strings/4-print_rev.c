#include "main.h"

/**
 * print-rev - prints a string in reverse\n
 * @s: string to be printed in reverse
 * Return: nothing
 */


void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); (i = 0); i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}

