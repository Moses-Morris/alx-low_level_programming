#include <stdio.h>
#include "main.h"
/* Authored By:  Moses Morris Njuguna */
/**
 * print_alphabet - Entry point
 * print_alphabet - Prints the alphabet in lowercase
 * _putchar - writes the character c to stdout.
 * Description: 'print_alphabet'
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
