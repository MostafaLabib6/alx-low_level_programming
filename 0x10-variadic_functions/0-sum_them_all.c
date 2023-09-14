#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 *
 * @n: parameter length
 *
 * Return: int total sum
*/

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i, sum = 0;

    if (n == 0)
        return n;
    /* ititialize the argument list from the start */
    va_start(ap, n);
    for (i = 0; i < n; ++i)
        sum += va_arg(ap, int);
    /*Free*/  
    va_end(ap);
    return (sum);

}
