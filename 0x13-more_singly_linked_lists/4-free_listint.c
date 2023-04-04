#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;
	listint_t *curr;

	while ((p = head))
	{
		curr = p;
		p = p->next;
		free(curr);
	}
}
