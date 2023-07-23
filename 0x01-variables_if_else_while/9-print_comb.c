#include <stdio.h>

/**
 * main - prints all posible combinations of single digit
 * Return; 0 always
 */


int main(void)

{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return 0;

}
