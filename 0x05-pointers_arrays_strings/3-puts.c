#include "main.h"

/**
 * _puts - prints a  string followed by a new line
 * @str: pointer to string to be printed
 * Return: nothing
 */

void _puts(char *str)

{
	int i = str[0];

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
