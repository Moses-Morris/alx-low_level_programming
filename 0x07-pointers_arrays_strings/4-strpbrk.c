#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _strpbrk - A function that searches a string for any of a set of bytes...
 *
 * @s: Declare variable of Char type.
 *
 * @accept: Declare variable of Char type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
