#include "main.h"
#include <stdio.h>
/**
 * print_array - prints values of array of ints in ascending order
 * @a: pointer to array
 * @n: number of values to be printed
 */


void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(&a[i]);
		printf(", ");
	}
	printf("\n");

}
