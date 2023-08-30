#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - return sqrt of number
 *
 * @n: number
 * Return: sqrt of  number.
*/

int _sqrt(int x, int s, int e)
{
    int mid;

    if(s > e)
        return (-1);
    mid = (s + e) / 2;
    if (mid * mid == x)
        return (mid);
    else if (mid * mid > x)
        return (_sqrt(x, s, mid - 1));
    else 
        return (_sqrt(x, mid + 1, e));


}

int _sqrt_recursion(int n)
{
    int start = 0;
    
    if (n < 0)
        return (-1);
    else if (n == 1 || n == 0)
        return (n);
    else
        return (_sqrt(n, start , n));
    
}
