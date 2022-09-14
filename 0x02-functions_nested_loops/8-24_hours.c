#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * jack_bauer - Entry point.
 * @void: The character to be checked.
 * jack_bauer - Prints the sign -.
 * _putchar - writes the character c to stdout.
 * Description: 'jack_bauer'
 * Return: 1 for positive num, -1 for negative num or zero for anything else.
 * The program does not use printf or put or write function : not allowed.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
