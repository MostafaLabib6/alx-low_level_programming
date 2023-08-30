
#include "main.h"

/**
 * is_prime_number - check if number is prime
 * @n:int
 *
 * Return: int
 */
 
int is_prime_number(int n)
{

  int i, flag = 0;

  if (n <= 0 || n == 1)
	   return (1);

  for (i = 2; i <= n / 2; ++i)
   {
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
   }

	return (!flag);
}
