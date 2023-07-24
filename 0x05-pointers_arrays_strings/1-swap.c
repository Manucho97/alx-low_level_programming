#include "main.h"

/**
 * swap_int - swaps two integers
 * @a:  1st int
 * @b: 2nd int
 * Return: nothing
 */


void swap_int(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
