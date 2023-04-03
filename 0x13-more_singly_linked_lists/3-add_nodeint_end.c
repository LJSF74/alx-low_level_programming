#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - adds node at end of linked list
 * @head: list
 * @str: node elem
 * Return: p
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t **p = head;
	list_t *e;

	e = malloc(sizeof(listint_t));
	if (e == NULL)
	{
		return (NULL);
	}
	e->n = n;
	while (*p)
	{
		p = &(*p)->next;
	}
	e->next = *p;
	*p = n;
	return (*p);
}
