#include <stdio.h>

/**
 * main - prints all lwoercase xchers of base 16
 * Return: 0 always
 */


int main(void)

{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);

}
