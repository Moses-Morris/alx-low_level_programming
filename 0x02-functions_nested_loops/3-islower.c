#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * _islower - Entry point.
 * _islower - Check for lowercase.
 * _putchar - writes the character c to stdout.
 * Description: '_islower'
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
int _islower(int c)
{
	int r = islower(c);
	if (r == 0)
	{
		int z = 0;

		_putchar(z);
		return (0);
	} else
	{
		int t = 1;

		_putchar(t);
		return (0);
	}
}
