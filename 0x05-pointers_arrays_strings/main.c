#include "main.h"
#include "0-reset_to_98.c"
#include "_putchar.c"
#include "1-swap.c"
#include "2-strlen.c"
#include "3-puts.c"
#include "5-rev_string.c"

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
    
    printf("\n");

    /*A function that returns the length of a string.*/
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    
    printf("\n");
    


    /*3 . a function that prints a string, followed by a new line, to stdout */
    //char *str;
    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);


    printf("\n");

    /*A function that prints a string, in reverse, followed by a new line.*/
    //char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    //print_rev(str);

    printf("\n");
    
    
    /*Number 5*/
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
   
    
    
    return (0);
}
