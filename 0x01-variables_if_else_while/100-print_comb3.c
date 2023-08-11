#include<stdio.h>

/**
 *	main - print all possible different combinations of two digits.
 *
 *	Return: Always 0.
 */

int main(void)
{
	int num,num2;

	putchar('0');
	putchar('1');
	for (num = 0; num <= 9; num++)
	{
		for (num2 = 2; num2 <= 9; num2++)
		{
			if (num2 > num)
			{
				putchar(',');
				putchar(' ');
				putchar(num + '0');
				putchar(num2 + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
