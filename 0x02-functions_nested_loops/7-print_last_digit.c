#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * print_last_digit - Entry point.
 * @n: The character to be checked.
 * print_last_digit - Prints the last digit .
 * _putchar - writes the character c to stdout.
 * Description: 'print_last_digit'
 * Return: 1 for positive num, -1 for negative num or zero for anything else.
 * The program does not use printf or put or write function : not allowed.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}

	_putchar(digit + '0');

	return (digit);
}
