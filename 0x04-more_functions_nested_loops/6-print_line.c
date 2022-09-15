#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int underscore;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (underscore = 1; underscore	<= n; underscore++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
