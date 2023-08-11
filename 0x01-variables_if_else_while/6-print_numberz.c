#include <stdlib.h> 
/**
 * 	main - print number from 0 to 10 using putchar
 * 
 * Return: 0
 * 
*/
int main(void)
{
	for (int num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
