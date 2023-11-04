#include "main.h"
#include <stdlib.h>

/**
 * mallock_checked - allocates memory using malloc
 * @b : the size of memory to be allocated
 * if malloc fails, the program should terminate with status 98
 * Return : a pointer to the newly allocated memory
*/


void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);

}
