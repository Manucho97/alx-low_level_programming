#include <stdio.h>

/**
 * main - prints alphabet in lowercase followed by new_line
 * Return: 0 always
 */


int main(void)

{
	char i;

	i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
