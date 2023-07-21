#include <stdio.h>

/**
 * more_numbers - print 0- 14 10times
 *
 * Return: 0
 */


int main(void)

{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				putchar('0' + j / 10);
			}
			putchar((j % 10) + '0');

		}
		putchar('\n');

	}
    return (0);

}