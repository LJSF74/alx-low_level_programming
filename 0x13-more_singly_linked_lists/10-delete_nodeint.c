#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: list
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *rm;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		rm = *head;
		*head = (*head)->next;
		free(rm);
		return (1);
	}
	else
	{
		while (i < index - 1)
		{
			p = p->next;
			if (p == NULL)
			{
				return (-1);
			}
			i++;
		}
		rm = p->next;
		p->next = p->next->next;
		free(rm);
		return (1);
	}
}
