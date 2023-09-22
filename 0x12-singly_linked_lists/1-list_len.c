#include "lists.h"

/**
 * list_len - gets the number of nodes
 *
 * @h: pointer to the head (first node)
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h != NULL)
	{
		/*go to the next node*/
		h = h->next;
		node_count++;
	}

	return (node_count);
}
