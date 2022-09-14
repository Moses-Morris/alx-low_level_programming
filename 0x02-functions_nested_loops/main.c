#include "main.h"
#include <stdio.h>
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "_putchar.c"
#include "4-isalpha.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();

    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    

    /*Ia Alphabet*/
    /*int r;*/

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');

    return (0);
}
