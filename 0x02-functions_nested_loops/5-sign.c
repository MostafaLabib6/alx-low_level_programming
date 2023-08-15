#include "main.h"

/**
 * print_sign - Checks a number status.
 * @n: The integer to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
