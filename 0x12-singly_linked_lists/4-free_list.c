#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees linked list
 * @head: list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p = head->next;

	while (p = head)
	{
		free(p->str);
		head = head->next;
	}
}
