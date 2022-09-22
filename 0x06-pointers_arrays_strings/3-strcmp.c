#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _strcmp - a function that compares 2 strings.
 *
 * @s1: First declared char type : Initialized.
 *
 * @s2: Second declared char type : Initialized.
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

