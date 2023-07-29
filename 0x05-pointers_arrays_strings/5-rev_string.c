#include "main.h"

/**
 * rev_string - reverses a string
 * sswap - swaps two characters
 * @a: first character
 * @b: 2nd character
 * @s: the string to be reversed
 * Return: nothing
 */


void sswap(char *a, char *b)

{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void rev_string(char *s)

{

int i, j;
int lenghth = 0;

while (s[lenghth] != '\0')
{
	lenghth++;
}

for (i = 0; j = lenghth - 1; i++, j--)
{
	sswap(&s[i], &s[j]);
}
_putchar('\n');

}