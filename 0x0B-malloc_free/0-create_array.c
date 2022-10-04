#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * create_array - Creates an array,and initializes it with a specific char.
 *
 * @c: Declare an array variable of Char type.
 *
 * @size: Declare a variable of int type.
 *
 * Return: NULL  if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
