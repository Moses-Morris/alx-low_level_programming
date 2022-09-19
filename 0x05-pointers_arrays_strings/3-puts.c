#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: First declared integer : Initialized.
 *
 * Return: a string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
