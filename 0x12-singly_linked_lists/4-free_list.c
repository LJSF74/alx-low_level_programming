#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees linked list
 * @head: list
 * Return: void
 */
void free_list(list_t *head)
{	
	while (head)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
