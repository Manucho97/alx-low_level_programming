#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks if a character is uppercase
 * @c - the character to be cheked
 * Return: 1 if the character is
=======
 * _isupper - checks if a character
 *  is uppercase
 * @c: the character to be cheked
 * Return: 1 if the character is 
>>>>>>> 45c6d55e4599a29bace8541858f54e75a1cc8335
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
