#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elemns of list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *p;

	p = h;
	while (p != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			i++;
		}
	}
	return (i);
}
