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
	int i, len, temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	return (s);
}
