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

	int digit1, digit2;

	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		for (digit2 = 1; digit2 <= 9; digit2++)
		{
			if (digit1 == digit2)
			{
				continue;
			} else
			{
				putchar((digit1 % 10) + '0');
                                putchar((digit2 % 10) + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
