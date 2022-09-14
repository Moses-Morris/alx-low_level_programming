#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * _abs - Entry point.
 * The character to be checked.
 * @r: The type declaration.
 * _abs - Check for absolute value.
 * _putchar - writes the character c to stdout.
 * Description: '_abs'
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
int _abs(int r)
{
	if (r < 0)
	{
		int absolute_value;

		absolute_value = r * -1;
		return (absolute_value);
	}
	return (r);
}
