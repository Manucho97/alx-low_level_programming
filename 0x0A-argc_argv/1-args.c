#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * 
 * Return: 0 always
*/


int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
