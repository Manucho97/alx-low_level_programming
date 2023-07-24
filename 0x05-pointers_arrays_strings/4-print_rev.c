#include "main.h"

/**
 * print-rev - prints a string in reverse\n
 * @s: string to be printed in reverse
 * Return: nothing
 */


void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j = 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}

