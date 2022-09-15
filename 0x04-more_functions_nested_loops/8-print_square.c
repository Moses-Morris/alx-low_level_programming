#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int size)
{
	int square, corners;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (square = 1; square <= size; square++)
		{
			_putchar('#');
			for (corners = 2; corners <= size; corners++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
