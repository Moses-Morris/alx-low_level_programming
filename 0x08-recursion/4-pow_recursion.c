#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _pow_recursion - A function that returns the -
 * value of x raised to the power of y...
 *
 * @y: Declare variable of Char type. -> power
 *
 * @x: Declare variable of int type. -> base
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 * If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
