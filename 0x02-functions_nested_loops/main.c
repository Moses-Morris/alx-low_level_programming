#include "main.h"
#include <stdio.h>
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "_putchar.c"
#include "4-isalpha.c"
#include "5-sign.c"
#include "6-abs.c"
#include "7-print_last_digit.c"
#include "8-24_hours.c"
#include "9-times_table.c"
#include "10-add.c"
#include "11-print_to_98.c"
#include "100-times_table.c"
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
    

    /*Is an Alphabet*/
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

    /*Print sign if positive or negative number*/
    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');


    /*Prints absolute values*/
    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);


    /*Print last digit*/
    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');


    /*Time in C hours and minutes*/
    jack_bauer();


    /* function that prints the 9 times table, starting with 0.*/
    times_table();

    /*A function that adds two numbers*/
    int n;

    n = add(89, 9);
    printf("%d\n", n);


    /*a function that prints all natural numbers from n to 98, followed by a new line.*/
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);


    /*Prints n times table lit to 15*/
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);


    return (0);
}
