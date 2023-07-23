#include <stdio.h>

/**
 * main - prints lowercase aphabets in reverse
 * Return: 0 always
 */


int main(void)

{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);

}
