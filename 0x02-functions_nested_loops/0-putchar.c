#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/* Authored By:  Moses Morris Njuguna */
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * The program does not use printf or put function.
 * The write function tells: 1-is the file descriptor being told to give standard output
 * 9 - is the number of characters that will be written by as bytes of the array.
 */

int main(void)
{
	write(1,"_putchar\n",9);
	return (0);
}
