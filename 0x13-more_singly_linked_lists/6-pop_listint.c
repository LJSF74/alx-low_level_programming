#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - removes first elem of list
 * @head: list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int v;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		new = *head;
		v = new->n;
		*head = (*head)->next;
		free(new);
		return (v);
	}
}
