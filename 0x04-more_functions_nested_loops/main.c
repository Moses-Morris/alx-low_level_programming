#include "main.h"


/*Here we include our   - C -   files*/
#include "0-isupper.c"


/*This is the testing file for our functions.*/
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
