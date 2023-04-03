#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: list
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
