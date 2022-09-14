#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * _isalpha - Entry point.
 * @c: The character to be checked.
 * _isalpha - Check for lowercase.
 * _putchar - writes the character c to stdout.
 * Description: '_isalpha'
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
