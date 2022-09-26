#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * set_string - A function that sets the value of a pointer to a char.
 *
 * @s: Declare variable of Char type.
 *
 * @to: Declare variable of Char type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
