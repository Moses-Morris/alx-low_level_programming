#include "main.h"


/*Here we include our   - C -   files*/
#include "0-isupper.c"
#include "1-isdigit.c"
#include "2-mul.c"
#include "3-print_numbers.c"
#include "_putchar.c"
#include "4-print_most_numbers.c"
#include "5-more_numbers.c"
#include "6-print_line.c"
#include "7-print_diagonal.c"
#include "8-print_square.c"

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


    /*1-isdigit.c*/
    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));


    /*Collaboration is multiplication*/
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));

    
    /*Print Numbers*/
    print_numbers();
    printf("\n");

    

    /*Print most numbers*/
    print_most_numbers();
    printf("\n");


    /*Print ten times the number*/
    more_numbers();
    printf("\n");


    /*Straight Line*/
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    printf("\n");


    /*Prints up a diagonal line*/
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    printf("\n");


    /*Print A square*/
    print_square(2);
    print_square(10);
    print_square(0);
    printf("\n");


    return (0);
}
