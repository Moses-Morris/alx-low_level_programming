#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * print_rev -  print a string, in reverse, followed by a new line.
 * @s: First declared integer : Initialized.
 * Return: reverse string.
 */
void print_rev(char *s)
{
	int reverse = 0;

	while (s[reverse] != '\0')
	{
		reverse++;
	}

	for (reverse -= 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}
