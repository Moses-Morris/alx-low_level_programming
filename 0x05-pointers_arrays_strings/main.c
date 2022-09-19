#include "main.h"
#include "0-reset_to_98.c"
#include "_putchar.c"
#include "1-swap.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    printf("\n");

    /*A function that swaps the values of two integers.*/
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    
    
    
    
    
    
    
    
    
    return (0);
}
