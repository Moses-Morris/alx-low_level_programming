#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/
/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: input declaration.
 *
 *  Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
