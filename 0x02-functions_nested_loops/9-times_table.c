#include "main.h"
#include <stdio.h>

/* Authored By:  Moses Morris Njuguna */
/**
 * times_table - Entry point
 * Description: 'Print out the times_table'
 * _putchar - writes the character c to stdout.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(c + '0');
			}
		}

		_putchar('\n');
	}
}
