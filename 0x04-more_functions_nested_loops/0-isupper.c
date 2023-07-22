#include "main.h"

/**
 * _isupper - checks if its an uppercase character
 * @c: character to be checked
 * Return: 0
*/


int _isupper(int c)

{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
