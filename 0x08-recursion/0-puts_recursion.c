#include "main.h"
/**
 * _puts_recursion - Prints a string by recursion
 * s: The string
 * Return: nothing
 */


void _puts_recursion(char* s)
{
	if (*s== '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s += 1);

}


