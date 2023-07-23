#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random value to n
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is 0", n);
	}

	printf("\n");

	return (0);
}
