#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _puts_recursion - A function that prints a string, followed by a new line...
 *
 * @s: Declare variable of Char type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
