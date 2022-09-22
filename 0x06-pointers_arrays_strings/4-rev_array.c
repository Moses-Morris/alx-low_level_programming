#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * reverse_array - a function that reverses an array
 *
 * @a: First declared char type : Initialized.
 *
 * @n: Second declared char type : Initialized.
 *
 * Return: Reverse Array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
