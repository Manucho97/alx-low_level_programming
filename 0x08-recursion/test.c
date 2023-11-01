#include <stdio.h>

int sqrt_recursion(int n);

int sqrt_recursion(int n)
{
    int x;

    if ((x * x == n))
    {
        return x;
    }
}

int main(void)
{
    int j = sqrt_recursion(25);
    printf("%d\n", j);
}