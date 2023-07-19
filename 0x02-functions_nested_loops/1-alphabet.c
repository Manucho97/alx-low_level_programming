#include "main.h"
/**
 * print_alphabet- Prints alphabet in lowercase
 * Return: nothing
*/

void print_alphabet(void)
{
    char c = 97;
    while (c < 123)
    {
        _putchar(c);
        c++;
    }
    _putchar('\n');
}