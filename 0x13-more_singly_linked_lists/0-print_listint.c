#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all elems of list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}
