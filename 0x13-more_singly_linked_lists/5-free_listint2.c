#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list
 * @head: list
 * Return: void
 */
void free_listint2(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
