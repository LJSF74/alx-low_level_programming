#include "lists.h"
#include <stdlib.h>
/**
 *
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while ((p = head))
	{
		free(p);
		head = head->next;
	}
}
