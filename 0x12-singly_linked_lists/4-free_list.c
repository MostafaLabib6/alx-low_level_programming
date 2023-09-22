#include"lists.h"

/**
 * free_list - free linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: NULL if it fails / starting addr of the list
*/


void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
