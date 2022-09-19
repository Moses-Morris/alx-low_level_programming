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

	len = strlen(str1);
	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}
