#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * print_to_98 - Entry point.
 * @n: The character to be checked.
 * print_to_98 - Print values to 98.
 * _putchar - writes the character c to stdout.
 * Description: 'print_to_98'
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
