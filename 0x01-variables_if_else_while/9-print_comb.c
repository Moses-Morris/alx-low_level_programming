#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Authored By:  Moses Morris Njuguna */


/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numeric;

	for (numeric = 0; numeric <= 9; numeric++)
	{
		putchar((numeric % 10) + '0');
		if (numeric == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
