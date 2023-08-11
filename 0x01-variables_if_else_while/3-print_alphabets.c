#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int s = 97;
    int e = 123;
    
	while(s < e){
        if(s < 97)
            putchar(s++);

        putchar(s++);
    
        if(s == 123){
            s = 65;
            e = 91;
        }
    
    }
    putchar('\n');
    

	return (0);
}
