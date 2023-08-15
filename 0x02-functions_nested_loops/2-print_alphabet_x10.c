#include "main.h"

/**
 *	print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i < 10; ++i)
		print_alphabet();
}