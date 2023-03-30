#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees linked list
 * @head: list
 * Return: void
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
