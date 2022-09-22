#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _strncpy - a function that concatenates 2 strings.
 *
 * @dest: First declared char type : Initialized.
 *
 * @src: Second declared char type : Initialized.
 *
 * @n: The looped entry/
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
