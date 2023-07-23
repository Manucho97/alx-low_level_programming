#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - assigns  a random value to n
 * Return: 0 always
 */


int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = (n % 10);

	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m > 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, m);
	}

	return (0);
}
