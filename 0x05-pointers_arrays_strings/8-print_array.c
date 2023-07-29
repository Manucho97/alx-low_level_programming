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
		printf(a[i]);
		printf(", ");
	}
	printf("\n");

}

int main(void)
{
	int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
