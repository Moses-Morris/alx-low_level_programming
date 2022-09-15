#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int underscore, diagonal;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (underscore = 1; underscore <= n; underscore++)
		{
			for (diagonal = 1; diagonal < underscore; diagonal++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
