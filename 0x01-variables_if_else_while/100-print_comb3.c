#include<stdio.h>

/**
 *	main - print all possible different combinations of two digits.
 *
 *	Return: Always 0.
 */

int main(void)
{
	int num, num2;
	int flag = 0;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			if (num2 > num)
			{
				if (flag == 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(num + '0');
				putchar(num2 + '0');
				flag = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
