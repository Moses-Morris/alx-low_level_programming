#include "main.h"

/**
 * main - Entry point
 *
 * void: Expect no return
 *
 * Return: 1 on Success and 0 on stderr
 */
int main(void)
{
	char buffer[98] = {0x00};
	
	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
