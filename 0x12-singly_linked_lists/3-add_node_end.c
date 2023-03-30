#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds node at end of linked list
 * @head: list
 * @str: node elem
 * Return: p
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **p = head;
	list_t *n;
	char *ch = strdup(str);

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}
	n->str = malloc(strlen(ch) + 1);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	strcpy(n->str, ch);
	n->len = strlen(ch);
	n->next = NULL;
	while (*p)
	{
		p = &(*p)->next;
	}
	n->next = *p;
	*p = n;
	return (*p);
}
