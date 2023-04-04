#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at idx
 * @head: list
 * @idx: index
 * @n: value
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *new, *nnew;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (new);
	}
	new->n = n;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		p = p->next;
	}
	nnew = p->next;
	p->next = new;
	new->next = nnew;
	return (new);
}
