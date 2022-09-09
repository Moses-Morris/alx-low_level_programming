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
	int digitOne;
	int digitTwo;

	for (digitOne = 0; digitOne < 10; digitOne++)
	{
		for (digitTwo = 0; digitTwo < 10; digitTwo++)
		{
			putchar((digitTwo % 10) + '0');
			putchar((digitOne % 10) + '0');

			if (digitOne == 9 && digitTwo == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
