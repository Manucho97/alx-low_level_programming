#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: The string to be printed
 * @f: Apomter to function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}