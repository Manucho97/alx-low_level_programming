#include "main.h"
/**
 * puts_half - prints half a string followed by a newline
 * @str: th string
 * Return: Nothing
 */


void puts_half(char *str)

{
	int length  = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		half = (length - 1)  / 2;
	}
	else
	{
		half = length / 2;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}

}


