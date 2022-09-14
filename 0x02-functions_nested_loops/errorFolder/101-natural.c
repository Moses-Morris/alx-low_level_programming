#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*Authored by Moses Morris*/

/*Betty Lint Style*/

/**
 * main - Entry point.
 * _putchar - writes the character c to stdout.
 * Description: 'Print multiple and add of 5 and 3'
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
int main(void)
{
	int a;

	for (a = 0; a < 1024; a++)
	{
		int y, z, result;

		if ((a % 5) == (0))
		{
			a = z;
		}
		else if ((a % 3) == (0))
		{
			a = y;
		}
		else
		{
		}
		result = z + y;
		printf("%d\n", result);
	}
}
