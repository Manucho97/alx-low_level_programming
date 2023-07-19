#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase aphabet 10times
 * 
 * return: 0
*/

void print_alphabet_x10(void)

{
    int i = 0;

    while ( i < 10)
    {
        char c = 97;
        while (c < 123)
        {
            _putchar(c);
            c++;
        }

        i++;
        _putchar('\n');

    }

}