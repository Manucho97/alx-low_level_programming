#include "main.h"

/**
 * _isupper - checks if a character
 *  is uppercase
 * @c: the character to be cheked
 * Return: 1 if the character is 
 * uppercase otherwise 0
 */


int _isupper(int c)

{
	if (c >= 65 && c < 91)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

