#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _memset - A function that fills memory with a constant byte.
 *
 * @s: Declare variable of Char type.
 *
 * @b: Declare variable of Char type.
 *
 * @n: Declare variable of unsigned int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
