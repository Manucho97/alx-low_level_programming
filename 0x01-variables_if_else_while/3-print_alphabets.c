#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 * Return: 0 always
 */


int main(void)

{
	int i, j;

	i = 65;
	j = 97;

	while (j < 123)
	{
		putchar(j);
		j++;
	}
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);

}
