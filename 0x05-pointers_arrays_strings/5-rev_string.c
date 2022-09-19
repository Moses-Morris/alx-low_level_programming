#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * rev_string -  print a string, in reverse, followed by a new line.
 * @s: First declared integer : Initialized.
 * Return: reverse string.
 */
void rev_string(char *s)
{
	int i, c, l;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
