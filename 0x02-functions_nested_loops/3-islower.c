#include "main.h"
/**
 * _islower - checks if c is a lowercase character
 * @c: character to be checked
 * Return: 1 if its lower else 0
 * 
*/

int _islower(int c)
{
    if (c >= 97 && c < 123)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}