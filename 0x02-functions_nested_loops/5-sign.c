#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * print_sign - Entry point.
 * @n: The character to be checked.
 * print_sign - Prints the sign -.
 * _putchar - writes the character c to stdout.
 * Description: 'print_sign'
 * Return: 1 for positive num, -1 for negative num or zero for anything else.
 * The program does not use printf or put or write function : not allowed.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/*write(1, "+", 1);*/
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		/*write(1, "-", 1);*/
		_putchar(45);
		return (-1);
	}
	/*write(1, "0", 1);*/
	_putchar(48);
	return (0);
}
