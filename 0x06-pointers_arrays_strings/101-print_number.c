#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * print_number - A function that prints an integer.
 *
 * @n: First declared char type : Initialized.
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
