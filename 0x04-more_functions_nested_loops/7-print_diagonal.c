#include "main.h"

/**
 * print_diagonal - prints a diagonal line on terminal
 * @n: number of times \ is printed
 * Return: 0
 */


void print_diagonal(int n)

{
	int i, j;

	for (i = 0; i < n; i++);
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\');
			}
		
		}
		_putchar('\n');

	}

}
