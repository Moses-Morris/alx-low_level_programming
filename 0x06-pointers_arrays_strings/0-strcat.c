#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _strcat - a function that concatenates 2 strings.
 *
 * @dest: First declared char type : Initialized.
 *
 * @src: Second declared char type : Initialized.
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	dest[a];
	src[b];
	a = strlen(dest);
	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
