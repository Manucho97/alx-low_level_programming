#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concanates s1 with n charcater of s2
 * @s1: 1st string
 * @s2: 2nd string
 * @n: Number of s2 characters to concanate
 * Return: pointer to the new string
*/

void *string_noncat(char *s1, char *s2, unsigned int n)
{
    int len1 = strlen(s1);
    int len2;
    if (n >= strlen(s2))
    {
        len2 = strlen(s2);
    }
    len2 = strnlen(s2, n);


    char *result = (char*)malloc(len1 + len2 + 1);

    if (result == NULL)
    {
        return(NULL);

    }

    strcpy(result, s1);
    strncat(result, s2, n);

    return (result);
    free(result);


}


int main(void)
{
 char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}