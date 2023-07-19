#include "main.h"
/**
 * _isalpha - chaecks whether a character is an alphabet
 * @c:  the character to be cheked
 * Return: 1 if c is an alphabet else return 0
 */


int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

