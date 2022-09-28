#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _print_rev_recursion - A function that prints a string in reverse...
 *
 * @s: Declare variable of Char type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
