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
	int number;
	char alphabets;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
