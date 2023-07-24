#include "main.h"

/**
 * _strlen - returns the length of a string
 * @c - the string whoose length is is to be determined
 * Return: the string length
 */


int _strlen(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	return (i);

}
