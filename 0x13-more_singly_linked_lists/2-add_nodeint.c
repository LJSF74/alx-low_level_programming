#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - adds elem to linked list
 * @head: linked list
 * @n: elem
 * Return: p
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **p = head;
	listint_t *e;

	e = malloc(sizeof(listint_t));
	if (e == NULL)
	{
		free(e);
		return (NULL);
	}
	e->n = n;
	e->next = *p;
	*p = e;
	return (*p);
}
