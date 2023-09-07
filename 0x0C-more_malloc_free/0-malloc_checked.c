#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  creates an array of chars,
 *        and initializes it with a specific char.
 * @b:int
 * Return: return pointer if fail return with exit(98)
 *       
 */

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);

}
