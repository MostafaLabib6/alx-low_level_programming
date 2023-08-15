#include "main.h"
/**
 *	main - print the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
		_putchar(i + '0');
	_putchar('\n');
	return (0);
}
