#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: concantinated pointer string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
