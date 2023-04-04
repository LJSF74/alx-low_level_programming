#include "lists.h"
/**
 * get_nodeint_at_index - gets value at specified index
 * @head: list
 * @index: index
 * Return: p
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p = head;

	for (i = 0 ; i < index ; i++)
	{
		p = p->next;
		if (p == NULL)
		{
			break;
		}
	}
	return (p);
}
