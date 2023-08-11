#include <stdlib.h>

/*
	main - print alphabet except e and q

	Return: 0
*/

int main(void)
{
	int s = 97;
	int e = 123;
	
	while(s < e){
		if(s == 101 || s == 103){
			s++;
			continue;
		}
		putchar(s++);
	}
	return (0);
}
