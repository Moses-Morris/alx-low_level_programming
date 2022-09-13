#include <time.h>
#include <stdio.h>
#include "main.h"

/* Authored By:  Moses Morris Njuguna */
/**
 * main - Entry point
 * Description: 'Print out the value _putchar'
 * _putchar - writes the character c to stdout.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 * The write function tells:
 * 1-is the file descriptor being told to give standard output
 * 9 - is the number of characters to be written as bytes of the array.
 */

/**
 * main - Prints Putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
