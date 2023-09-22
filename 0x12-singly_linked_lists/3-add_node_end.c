#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	size_t str_len = 0;
	list_t *node, *tmp;
	if (str == NULL)
		str_len = 0;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return(NULL);
	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;
	if (head == NULL)
	{
		node->str = strdup(str);
		node->len = str_len;
		node->next = NULL;

		*head = node;
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	node->str = strdup(str);
	node->len = str_len;
	node->next = NULL;

	*head = node;

	return (*head);
}
