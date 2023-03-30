#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds elem to linked list
 * @head: linked list
 * @str: elem
 * Return: p
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t **p = head;
	list_t *n;
	char *ch = strdup(str);

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	n->str = malloc(strlen(ch) + 1);
	if (n->str == NULL)
	{
		free(n);
		free(n->str);
		return (NULL);
	}
	strcpy(n->str, ch);
	n->len = strlen(ch);
	n->next = NULL;
	n->next = *p;
	*p = n;
	return (*p);
}
