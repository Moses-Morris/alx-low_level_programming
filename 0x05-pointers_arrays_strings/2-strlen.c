#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * _strlen - a function that counts the string length.
 * @s: First declared integer : Initialized.
 * Return: String length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
