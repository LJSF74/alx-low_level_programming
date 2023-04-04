#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list
 * @head: list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	listint_t *curr;

	while (p)
	{
		curr = p;
		p = p->next;
		free(curr);
	}
	*head = NULL;
}
