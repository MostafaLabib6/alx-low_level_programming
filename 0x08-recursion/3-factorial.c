#include <stdio.h>
#include "main.h"
/**
 * factorial - returns factorial of number
 *
 * @n: number
 *
 * Return: Factorial of number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (factorial(n -1) * n);

}
