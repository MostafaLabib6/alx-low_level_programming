#include"lists.h"

/**
 * print_list - Prints linked list
 * @h: h of the linked list
 * Return: number of node in linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	char *nll = "[0] (nil)";

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%s\n", nll);
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}