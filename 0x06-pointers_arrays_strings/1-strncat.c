#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _strncat - a function that concatenates 2 strings.
 *
 * @dest: First declared char type : Initialized.
 *
 * @src: Second declared char type : Initialized.
 *
 * @n: it will use at most n bytes from @src.
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
