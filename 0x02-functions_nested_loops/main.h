#include <unistd.h>
/*The header file */
/*This file will contain all our prototype functions*/
/*It will be included as a header file*/
void print_alphabet(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
		write(1, &a, 1);
	}
	write(1, "\n", 1);
}
