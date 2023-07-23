#include <stdio.h>

/**
 * main - prints alphabet in lowercase followed by new_line
 * Return: 0 always
 */


int main(void)

{
	char i;

	i = 'a';

	while (i < 'z');
	{
		putchar(i);
		i++;
	}
	return (0);

}
