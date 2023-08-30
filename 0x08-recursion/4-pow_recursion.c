#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - returns fast power
 *
 * @x: number
 * @y: number
 * Return: power of two number.
*/


int _pow_recursion(int x, int y)
{
	int ans;

	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0) 
		return (1);
	ans = _pow_recursion(x, y / 2);
	ans = ans * ans;
	if (y & 1)
		return x * ans;
	return ans;

}
