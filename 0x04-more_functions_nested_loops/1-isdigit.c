#include "main.h"

/**
 * _isdigit - checks whether a
 *  character is digit
 *  @c: digit to be checked
 *  Return: if its a digit otherwise 0
 */


int _isdigit(int c)

{
	if (c >= 48 && c < 58)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
