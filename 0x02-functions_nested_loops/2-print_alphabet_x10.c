#include "main.h"
#include <stdio.h>

/* Authored By:  Moses Morris Njuguna */
/**
 * print_alphabet_x10 - Entry point
 * Description: 'Print out the value _putchar'
 * _putchar - writes the character c to stdout.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */

void print_alphabet_x10(void)
{
	int b;

	for (b = 1; b <= 10; b++)
	{
		int a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
