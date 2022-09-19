#include "main.h"

/*Authored by Moses Morris*/
/*Function file*/
/*Betty Lint Coding and format style*/

/**
 * swap_int - a function that swaps to int entries
 * @a: First declared integer : Initialized.
 * @b: Second declared integer : Initialized.
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
}
