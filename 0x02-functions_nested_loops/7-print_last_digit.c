#include "main.h"

/**
 * print_last_digit - return last digit of a number.
 * @n: The number to be checked.
 *
 * Return: n%10 if @n is postive or 0.
 */
int print_last_digit(int n)
{
	int tmp = n % 10;

	if (tmp < 0)
		return (-1 * tmp);
	return (tmp);
}
